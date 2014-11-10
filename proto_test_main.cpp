
#include <iostream>
#include <fstream>

#include <google/protobuf/text_format.h>


#include "student_01.pb.h"

#pragma comment (lib, "libprotobuf.lib" )

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

