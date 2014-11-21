
#include <iostream>
#include <fstream>


#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/dynamic_message.h>
#include <google/protobuf/compiler/importer.h>
#include <google/protobuf/text_format.h>


#pragma comment (lib, "libprotobuf.lib" )

//#pragma comment (lib, "libprotobuf-lite.lib" )




int main(int argc, const char *argv[])
{
    google::protobuf::compiler::DiskSourceTree sourceTree;
    //look up .proto file in current directory
    sourceTree.MapPath("", "proto");

    //google::protobuf::compiler::MultiFileErrorCollector error_collector;

    google::protobuf::compiler::Importer importer(&sourceTree, NULL);
    //runtime compile foo.proto
    const google::protobuf::FileDescriptor *open_result = importer.Import("pb_test_02.proto");
    if (!open_result)
    {
        std::cout << "Open file fail. Please check your. code." << std::endl;
        return -1;
    }

    const google::protobuf::FileDescriptor *open_result_1 = importer.Import("pb_test_01.proto");
    if (!open_result_1)
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

    const google::protobuf::FieldDescriptor  *desc_s3_a = importer.pool()->FindFieldByName("N01.N02.S3.s3_a");
    if (desc_s3)
    {
        std::cout << desc_s3_a->DebugString();
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
    //
    if (field->type() == google::protobuf::FieldDescriptor::Type::TYPE_INT64 &&
        field->label() == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
    {
        reflection->AddInt64(message_s3, field, 101);
        reflection->AddInt64(message_s3, field, 102);
    }
    else
    {
        assert(false);
    }

    const google::protobuf::FieldDescriptor *field_s3_e = NULL;
    field_s3_e = desc_s3->FindFieldByName("s3_e");
    //
    if (field_s3_e->type() == google::protobuf::FieldDescriptor::Type::TYPE_MESSAGE &&
        field_s3_e->label() == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED)
    {
        google::protobuf::Message *message_s1 = NULL;
        message_s1 = reflection->AddMessage(message_s3, field_s3_e, NULL);

        const google::protobuf::Descriptor *desc_s1 = NULL;
        desc_s1 = message_s1->GetDescriptor();
        
        field = desc_s1->FindFieldByName("s1_a");
        message_s1->GetReflection()->SetInt32(message_s1, field, 0x1000A);

        field = desc_s1->FindFieldByName("s1_b");
        message_s1->GetReflection()->SetInt32(message_s1, field, 0x1000B);


        message_s1 = reflection->AddMessage(message_s3, field_s3_e, NULL);

        desc_s1 = message_s1->GetDescriptor();

        field = desc_s1->FindFieldByName("s1_a");
        message_s1->GetReflection()->SetInt32(message_s1, field, 0x2000A);

        field = desc_s1->FindFieldByName("s1_b");
        message_s1->GetReflection()->SetInt32(message_s1, field, 0x2000B);


    }
    else
    {
        assert(false);
    }


    field = desc_s3->FindFieldByName("s3_f");
    //
    if (field->type() == google::protobuf::FieldDescriptor::Type::TYPE_MESSAGE)
    {
        google::protobuf::Message *message_s2 = NULL;
        message_s2 = reflection->MutableMessage(message_s3, field, NULL);

        const google::protobuf::Descriptor *desc_s2 = NULL;
        desc_s2 = message_s2->GetDescriptor();

        field = desc_s2->FindFieldByName("s2_a");
        message_s2->GetReflection()->SetInt32(message_s2, field, 0x1000A);

        field = desc_s2->FindFieldByName("s2_b");
        message_s2->GetReflection()->AddString(message_s2, field, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
        message_s2->GetReflection()->AddString(message_s2, field, "BBBBBBBBBBBBBBBBBBBBBBBBBBBB");
        message_s2->GetReflection()->AddString(message_s2, field, "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC");

    }
    else
    {
        assert(false);
    }

    const google::protobuf::FieldDescriptor *field_s3_g = NULL;
    field_s3_g = desc_s3->FindFieldByName("s3_g");
    if (field_s3_g &&
        field_s3_g->type() == google::protobuf::FieldDescriptor::Type::TYPE_MESSAGE &&
        field_s3_g->label() == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED)
    {
        google::protobuf::Message *message_s4 = NULL;
        message_s4 = reflection->AddMessage(message_s3, field_s3_g, NULL);

        const google::protobuf::Descriptor *desc_s4 = NULL;
        desc_s4 = message_s4->GetDescriptor();

        field = desc_s4->FindFieldByName("s4_a");

        if (field &&
            field->type() == google::protobuf::FieldDescriptor::Type::TYPE_ENUM)
        {
            
            const google::protobuf::EnumDescriptor *enum_desc = 
                field->enum_type();

            const google::protobuf::EnumValueDescriptor *ea_desc = enum_desc->FindValueByName("E1_B");
            message_s4->GetReflection()->SetEnum(message_s4, field, ea_desc);


        }
        else
        {
            assert(false);
        }

        field = desc_s4->FindFieldByName("s4_b");
        message_s4->GetReflection()->SetString(message_s4, field, "SBSBSBSB");


        message_s4 = reflection->AddMessage(message_s3, field_s3_g, NULL);
        field = desc_s4->FindFieldByName("s4_b");
        message_s4->GetReflection()->SetString(message_s4, field, "BSBSBSBSBS");
    }
    else
    {
        assert(false);
    }

    if (message_s3->IsInitialized())
    {
        std::cout << "S3 is Initialized" << std::endl;
    }
    else
    {
        std::cout << "S3 is Loser" << std::endl;
    }

    std::cout << message_s3->DebugString();

    delete message_s3;
    message_s3 = NULL;

    return 0;
}

