//
//  main.cpp
//  algStudy
//
//  Created by David on 3/23/18.
//  Copyright © 2018 davidmnoll. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include "binarytree/binarytree.hpp"

int main(int argc, const char * argv[])
{
    BinaryTree a;
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(5);
    a.insert(7);
    a.insert(11);
    
    a.output();
    
    
    return 0;
}
