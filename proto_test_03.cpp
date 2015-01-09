
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
    S3 s3_src;

    s3_src.Clear();

    s3_src.set_s3_1(0x88);
    s3_src.set_s3_2(0x8888);
    s3_src.set_s3_3(0xE8E8E8);
    s3_src.set_s3_4(0xE8E8E8E8);

    s3_src.set_s3_5(0x8888);
    s3_src.set_s3_6(0xE8E8E8E8);

    s3_src.set_s3_7(0xE8E8E8E8);
    s3_src.set_s3_8(0xE8E8E8E8E8E8E8E8LL);

    s3_src.set_s3_9(0x8888);
    s3_src.set_s3_10(-0x8888);

    s3_src.set_s3_64(0x8888);
    s3_src.set_s3_65(-0x8888);

    s3_src.set_s3_11(E1_5);
    s3_src.set_s3_12(true);

    s3_src.set_s3_13(88.888F);
    s3_src.set_s3_14(0x8888);
    s3_src.set_s3_15(-0x8888);

    s3_src.set_s3_16(8888.8888);
    s3_src.set_s3_17(0x8888888888);
    s3_src.set_s3_18(-0x8888888888);

    s3_src.set_s3_19("I love you,C++!");
    s3_src.set_s3_20("I hate you,C++!");

    s3_src.add_s3_21(3);
    s3_src.add_s3_21(270); 
    s3_src.add_s3_21(86942);

    s3_src.add_s3_22(3);
    s3_src.add_s3_22(270);
    s3_src.add_s3_22(86942);

    s3_src.add_s3_23("love");
    s3_src.add_s3_23("hate");
    s3_src.add_s3_23("C++");

    S2 *s2_p =  s3_src.mutable_s3_24();
    s2_p->set_s2_1(1);
    s2_p->set_s2_2("love");

    s2_p = s3_src.add_s3_25();
    s2_p->set_s2_1(22);
    s2_p->set_s2_2("love");

    s2_p = s3_src.add_s3_25();
    s2_p->set_s2_1(22);
    s2_p->set_s2_2("hate");

    char buffer[64 * 1024];
    size_t buf_use = 0;
    if (s3_src.IsInitialized())
    {
        if (s3_src.SerializeToArray(buffer, 64 * 1024))
        {
            std::cout << s3_src.ByteSize() << std::endl;
            buf_use = s3_src.ByteSize();
        }
        else
        {
            assert(false);
        }
    }
    else
    {
        std::cout << "IsInitialized return false.!" << std::endl;
        return 0;
    }

    S3 s3_dst;
    bool bret = s3_dst.ParseFromArray(buffer, buf_use);
    if (bret)
    {
        std::cout << "ParseFromArray ok" << std::endl;
    }
    else
    {
        assert(false);
    }
    return 0;
}




