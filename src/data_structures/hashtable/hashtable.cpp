//
//  hashtable.cpp
//  algStudy
//
//  Created by David on 4/21/18.
//  Copyright © 2018 davidmnoll. All rights reserved.
//

#include "hashtable.hpp"
using namespace std;

HashTable::HashTable()
{
    length = 32;
    buck = new LinkedList *[32]();
    entries = 0;
};


unsigned int HashTable::hash(string key)
{
    unsigned int hash = 7;
    for (int i = 0; i < key.length(); i++) {
        hash = hash*31 * key[i] + i;
    }
    hash = hash % length;
    return hash;
}

int HashTable::find(string key)
{
    int index = hash(key);
    LinkedList *curr = buck[index];
    while(curr != nullptr)
    {
        if(curr->key == key)
        {
//            std::cout << curr;
            int val = curr->value;
            return val;
        }

        curr = curr->next;
    }
    return 0;
}


void HashTable::output()
{
    cout << "\nHashTable:\n";
    for(int i = 0; i < length; i++)
    {
        LinkedList *curr = buck[i];
        cout << "\t";
        cout << i;
        cout << "\t";
        cout << curr;
        cout << "--\n\t";
        while (curr != nullptr){
            cout << "\t";
            cout << curr;
            cout << ":";
            cout << curr->key;
            cout << ",";
            cout << curr->value;
            cout << ",";
            cout << curr->next;
            curr = curr->next;
        }
        cout << buck[i];
        cout << "\n";
        cout << "\n";
    }
}

void HashTable::insert(string key, int value)
{
    unsigned int index = hash(key);
    cout << index;
    LinkedList *curr = buck[index];
    LinkedList *ins = new LinkedList{
        key,
        value,
        NULL,
    };
    if (curr == nullptr){
        buck[index] = ins;
    }
    else
    {
        while(curr->next != nullptr)
        {
            curr = curr->next;
        }
        
        curr->next = ins;
    }
    entries++;
    if(entries > 3*length) rehash();
}


void HashTable::rehash()
{
    this->length = 2 * length;
    LinkedList** old = buck;
    this->buck = new LinkedList* [length];
    for (int i=0; i < length; i++)
    {
        LinkedList* curr = old[i];
        while(curr != nullptr)
        {
            insert(curr->key, curr->value);
            curr = curr->next;
        }
    }
}

