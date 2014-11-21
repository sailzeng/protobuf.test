
#include <iostream>
#include <fstream>


#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/dynamic_message.h>
#include <google/protobuf/compiler/importer.h>
#include <google/protobuf/text_format.h>


#include "pb_test_03.pb.h"

#pragma comment (lib, "libprotobuf-lite.lib" )

int main(int argc, char *argv[])
{
    S1 p;
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

    return 0;
}




