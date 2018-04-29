//
//  main.cpp
//  algStudy
//
//  Created by David on 3/23/18.
//  Copyright © 2018 davidmnoll. All rights reserved.
//
#include <stdio.h>
#include <string>
#include <iostream>
#include "binarytree/binarytree.hpp"

int mainBinTree(int argc, const char * argv[])
{
    BinaryTree a(3);
    a.output();
    std::cout << "\n";
    std::cout << "\n";
    a.insert(1);
    a.insert(2);
    a.insert(5);
    a.insert(7);
    a.insert(11);
    
    a.output();

    a.remove(7);
    std::cout << "\n";
    a.output();

    return 0;
}
