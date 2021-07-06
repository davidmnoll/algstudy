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
#include "data_structures/hashtable/hashtable.hpp"
#include "data_structures/binarytree/binarytree.hpp"
#include "data_structures/stack/stack.hpp"

#include "algorithms/dynamic_programming/fibonacci.hpp"

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


int main_hashtable(int argc, const char * argv[])
{
    std::cout << "start - ht\n";

    HashTable ht;
    ht.insert("test", 3);
    ht.insert("tesadt", 2);
    ht.insert("tes23asdt", 10);
    ht.insert("s2345234t", 7);
    ht.insert("tea234sdfast", 9);
    ht.insert("te132st", 4);
    ht.output();

    std::cout << "\ntest\n";
    int val = ht.find("tesadt");
    std::cout << val;

    std::cout << "\nend\n";
    return 0;
}

int main_binarytree(int argc, const char * argv[])
{
    std::cout << "start - bt\n";
    BinaryTree a(3);
    std::cout << "1\n";
    a.output();
    std::cout << "2\n";
    std::cout << "\n";
    std::cout << "\n";
    a.insert(1);
    std::cout << "3\n";
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
int main_stack(int argc, const char * argv[])
{
    std::cout << "start - stack\n";
    Stack s();
    std::cout << "wow";
    return 0;
}
int main_fibonacci(int argc, const char * argv[])
{
    std::cout << "start - stack\n";
    std::cout << fibonacci(2);
    std::cout << fibonacci(3);
    std::cout << fibonacci(4);
    std::cout << fibonacci(5);
    std::cout << faster_fibonacci(5);
    std::cout << faster_fibonacci(25);
    std::cout << faster_fibonacci(50);
    std::cout << "wow";
    return 0;

}