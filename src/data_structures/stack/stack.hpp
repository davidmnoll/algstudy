//
//  hashtable.hpp
//  algStudy
//
//  Created by David on 4/21/18.
//  Copyright © 2018 davidmnoll. All rights reserved.
//

#ifndef stack_hpp
#define stack_hpp

#include <stdio.h>
#include <string>
#include <iostream>

#include "../linkedlist/linkedlist.hpp"


class Stack
{
private:
    int length;
    LinkedList** buck;
    unsigned int hash(std::string key);
    void rehash();

public:
    Stack();
    int find(std::string key);
    void insert(std::string key, int value);
    bool remove(std::string key);
    void output();
    
};
#endif /* hashtable_hpp */


