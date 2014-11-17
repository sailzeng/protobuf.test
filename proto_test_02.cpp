
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
    sourceTree.MapPath("", "./");
    google::protobuf::compiler::Importer importer(&sourceTree, NULL);
    //runtime compile foo.proto
    importer.Import("foo.proto");

    const google::protobuf::Descriptor *descriptor = importer.pool()->FindMessageTypeByName("Pair");
    std::cout << descriptor->DebugString();

    // build a dynamic message by "Pair" proto
    google::protobuf::DynamicMessageFactory factory;
    const google::protobuf::Message *message = factory.GetPrototype(descriptor);
    // create a real instance of "Pair"
    google::protobuf::Message *pair = message->New();

    // write the "Pair" instance by reflection
    const google::protobuf::Reflection *reflection = pair->GetReflection();

    const google::protobuf::FieldDescriptor *field = NULL;
    field = descriptor->FindFieldByName("key");
    reflection->SetString(pair, field, "my key");
    field = descriptor->FindFieldByName("value");
    reflection->SetUInt32(pair, field, 1111);

    std::cout << pair->DebugString();

    delete pair;

    return 0;
}

