
#include <iostream>
#include <fstream>

#include <google/protobuf/text_format.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/dynamic_message.h>


#include "student_01.pb.h"

#pragma comment (lib, "libprotobuf.lib" )


int test_main1(int argc, char *argv[])
{
    google::protobuf::FileDescriptorProto file_proto;
    file_proto.set_name("foo.proto");

    // create dynamic message proto names "Pair"
    google::protobuf::DescriptorProto *message_proto = file_proto.add_message_type();
    message_proto->set_name("Pair");

    google::protobuf::FieldDescriptorProto *field_proto = NULL;

    field_proto = message_proto->add_field();
    field_proto->set_name("key");
    field_proto->set_type(google::protobuf::FieldDescriptorProto::TYPE_STRING);
    field_proto->set_number(1);
    field_proto->set_label(google::protobuf::FieldDescriptorProto::LABEL_REQUIRED);

    field_proto = message_proto->add_field();
    field_proto->set_name("value");
    field_proto->set_type(google::protobuf::FieldDescriptorProto::TYPE_UINT32);
    field_proto->set_number(2);
    field_proto->set_label(google::protobuf::FieldDescriptorProto::LABEL_REQUIRED);

    // add the "Pair" message proto to file proto and build it
    google::protobuf::DescriptorPool pool;
    const google::protobuf::FileDescriptor *file_descriptor = pool.BuildFile(file_proto);
    const google::protobuf::Descriptor *descriptor = file_descriptor->FindMessageTypeByName("Pair");
    std::cout << descriptor->DebugString();

    // build a dynamic message by "Pair" proto
    google::protobuf::DynamicMessageFactory factory(&pool);
    const google::protobuf::Message *message = factory.GetPrototype(descriptor);
    // create a real instance of "Pair"
    google::protobuf::Message *pair = message->New();

    // write the "Pair" instance by reflection
    const google::protobuf::Reflection *reflection = pair->GetReflection();
    const google::protobuf::FieldDescriptor *field = NULL;
    field = descriptor->FindFieldByName("key");
    reflection->SetString(pair, field, "my key");
    field = descriptor->FindFieldByName("value");
    reflection->SetUInt32(pair, field, 1234);

    std::cout << pair->DebugString();
    delete pair;
    return 0;
}


int test_main2(int argc, char *argv[])
{

    return 0;
}



int main(int argc, char *argv[])
{
    Person p;
    p.set_id(1);
    p.set_name("JiaJia");
    p.set_email("JiaJia@qq.com");

    

    Person::PhoneNumber *ptr_pn = NULL;

    ptr_pn = p.add_phone();
    ptr_pn->set_type(Person::MOBILE);
    ptr_pn->set_number("136XXXXXXXX");

    ptr_pn = p.add_phone();
    ptr_pn->set_type(Person::HOME);
    ptr_pn->set_number("180XXXXXXXX");

    p.add_classid(1);
    p.add_classid(2);
    p.add_classid(3);

    std::fstream output_f("C:\\myfile.out", std::ios::out | std::ios::binary);
    p.SerializeToOstream(&output_f);

    std::string out_str;
    google::protobuf::TextFormat::PrintToString(p,&out_str);

    std::cout << out_str.c_str() << std::endl;
    

    return 0;
}



