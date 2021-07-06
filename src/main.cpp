//
//  main.cpp
//  algStudy
//
//  Created by David on 3/23/18.
//  Copyright © 2018 davidmnoll. All rights reserved.
//
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "data_structures/main_datastructures.hpp"
#include "algorithms/main_algorithms.hpp"

#include "main.hpp"

int main(int argc, const char * argv[])
{
    std::cout << "start\n";
    
    for (int i = 0; i < argc; ++i)
    {
        std::string arg(argv[i]);
        if (arg == "binarytree")
        {
            std::cout << "\nhere3.1\n";
            return main_binarytree(argc, argv);
        }
        else if (arg == "hashtable")
        {
            std::cout << "\nhere3.2\n";
            return main_hashtable(argc, argv);
        }
        else if (arg == "stack")
        {
            std::cout << "\nhere3.3\n";
            return main_stack(argc, argv);
        }
        else if (arg == "fib")
        {
            std::cout << "\nhere3.4\n";
            return main_stack(argc, argv);
        }else{
            std::cout << "not matched\n";
            std::cout << argv[i];
        }
    }



    std::cout << "\nend\n";
    return 0;
}





