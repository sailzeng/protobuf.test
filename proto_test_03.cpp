
#include <iostream>
#include <fstream>


#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/dynamic_message.h>
#include <google/protobuf/compiler/importer.h>
#include <google/protobuf/text_format.h>


#include "pb_test_03.pb.h"

#pragma comment (lib, "libprotobuf.lib" )

int main(int argc, char *argv[])
{
    S1 p;
    p.set_s1_b(20);
    p.add_s1_c(1);
    p.add_s1_c(2);
    p.add_s1_c(3);
    p.add_s1_c(4);
    p.add_s1_c(5);

    S2 *p_s2 = NULL;
    p_s2 = p.add_s1_d();
    p_s2->set_s2_a(1);
    p_s2->set_s2_b("134361");

    p_s2 = p.add_s1_d();
    p_s2->set_s2_a(2);
    p_s2->set_s2_b("134361");

    p_s2 = p.add_s1_d();
    p_s2->set_s2_a(3);
    p_s2->set_s2_b("134361");

    p_s2 = p.add_s1_d();
    p_s2->set_s2_a(4);
    p_s2->set_s2_b("134361");

    p_s2 = p.add_s1_d();
    p_s2->set_s2_a(5);
    p_s2->set_s2_b("134361");

    p.Clear();
    p.set_s1_b(20);
    p.add_s1_c(1);

    p_s2 = p.add_s1_d();
    p.set_s1_b(20);
    p.add_s1_c(1);


    char buffer[64 * 1024];
    if (p.IsInitialized())
    {
        if (p.SerializePartialToArray(buffer, 64 * 1024))
        {
            std::cout << p.ByteSize() << std::endl;
        }
        else
        {
            assert(false);
        }
    }
    else
    {
        std::cout << "IsInitialized return false.!" << std::endl;
    }

    return 0;
}




