
#include <iostream>
#include <fstream>


#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/dynamic_message.h>
#include <google/protobuf/compiler/importer.h>
#include <google/protobuf/text_format.h>

#include "pb_test_04.option.pb.h"

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
    const google::protobuf::FileDescriptor *open_result = importer.Import("pb_test_04.proto");
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
    const google::protobuf::Descriptor *desc_s4 = importer.pool()->FindMessageTypeByName("MyMessage");
    if (desc_s4)
    { 
        std::cout << desc_s4->DebugString();
    }
	const google::protobuf::MessageOptions& mo = desc_s4->options();

    
	std::cout << "mo uninterpreted_option_size " << mo.uninterpreted_option_size() << std::endl;
	int abc = mo.GetExtension(my_message_option);
	
	std::cout << " abc " << abc << std::endl;

	
    return 0;
}

