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
#include "hashtable/hashtable.hpp"

int main(int argc, const char * argv[])
{
    std::cout << "start\n";

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

    std::cout << "\nend";
    return 0;
}
