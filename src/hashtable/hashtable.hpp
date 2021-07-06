//
//  hashtable.hpp
//  algStudy
//
//  Created by David on 4/21/18.
//  Copyright © 2018 davidmnoll. All rights reserved.
//

#ifndef hashtable_hpp
#define hashtable_hpp

#include <stdio.h>
#include <string>
#include <iostream>


#include "../linkedlist/linkedlist.hpp"


class HashTable
{
private:
    int length;
    LinkedList** buck;
    unsigned int hash(std::string key);
    void rehash();

public:
    HashTable();
    int find(std::string key);
    void insert(std::string key, int value);
    bool remove(std::string key);
    void output();
    
};
#endif /* hashtable_hpp */


