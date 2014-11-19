
#include <iostream>
#include <fstream>

#include <google/protobuf/text_format.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/dynamic_message.h>
#include <google/protobuf/compiler/importer.h>



#pragma comment (lib, "libprotobuf.lib" )


int main(int argc, const char *argv[])
{
    google::protobuf::compiler::DiskSourceTree sourceTree;
    //look up .proto file in current directory
    sourceTree.MapPath("", "proto");

    //google::protobuf::compiler::MultiFileErrorCollector error_collector;

    google::protobuf::compiler::Importer importer(&sourceTree, NULL);
    //runtime compile foo.proto
    const google::protobuf::FileDescriptor *open_result = importer.Import("test_02.proto");
    if (!open_result)
    {
        std::cout << "Open file fail. Please check your. code." << std::endl;
        return -1;
    }

    //可以发现内嵌类，用.操作的方法
    const google::protobuf::Descriptor *desc_s4 = importer.pool()->FindMessageTypeByName("N01.N02.S3.S4");
    if (desc_s4)
    { 
        std::cout << desc_s4->DebugString();
    }
    
    //测试一下如何使用反射。
    const google::protobuf::Descriptor *desc_s3 = importer.pool()->FindMessageTypeByName("N01.N02.S3");
    if (desc_s3)
    {
        std::cout << desc_s3->DebugString();
    }

    // build a dynamic message by "Pair" proto
    google::protobuf::DynamicMessageFactory factory;
    const google::protobuf::Message *message = factory.GetPrototype(desc_s3);

    // create a real instance of "S3"
    google::protobuf::Message *message_s3 = message->New();

    // write the "Pair" instance by reflection
    const google::protobuf::Reflection *reflection = message_s3->GetReflection();

    const google::protobuf::FieldDescriptor *field = NULL;
    field = desc_s3->FindFieldByName("s3_a");
    if (field->type() == google::protobuf::FieldDescriptor::Type::TYPE_INT32)
    {
        reflection->SetInt32(message_s3, field, 0x1234);
    }
    else
    {
        assert(false);
    }
    
    field = desc_s3->FindFieldByName("s3_b");
    if (field->type() == google::protobuf::FieldDescriptor::Type::TYPE_STRING)
    {
        reflection->SetString(message_s3, field, "My god.!I love you.");
    }
    else
    {
        assert(false);
    }

    field = desc_s3->FindFieldByName("s3_c");
    if (field->type() == google::protobuf::FieldDescriptor::Type::TYPE_STRING)
    {
        reflection->SetString(message_s3, field, "My sadan.!I hate you.");
    }
    else
    {
        assert(false);
    }

    
    field = desc_s3->FindFieldByName("s3_d");
    if (field->type() == google::protobuf::FieldDescriptor::Type::TYPE_MESSAGE)
    {
        reflection->AddMessage(message_s3, field, NULL);
    }
    else
    {
        assert(false);
    }


    std::cout << desc_s3->DebugString();

    delete desc_s3;
    desc_s3 = NULL;

    return 0;
}

