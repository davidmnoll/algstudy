//
//  hashtable.cpp
//  algStudy
//
//  Created by David on 4/21/18.
//  Copyright © 2018 davidmnoll. All rights reserved.
//

#include "stack.hpp"
using namespace std;

Stack::Stack()
{
    this->length = 32;
    this->buck = new LinkedList *[32]();
};


unsigned int Stack::hash(string key)
{
    unsigned int hash = 7;
    for (int i = 0; i < key.length(); i++) {
        hash = hash*31 * key[i] + i;
    }
    hash = hash % this->length;
    return hash;
}

int Stack::find(string key)
{
    int index = this->hash(key);
    LinkedList *curr = this->buck[index];
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


void Stack::output()
{
    cout << "\nHashTable:\n";
    for(int i = 0; i < this->length; i++)
    {
        LinkedList *curr = this->buck[i];
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
        cout << this->buck[i];
        cout << "\n";
        cout << "\n";
    }
}

void Stack::insert(string key, int value)
{
    unsigned int index = this->hash(key);
    cout << index;
    LinkedList *curr = this->buck[index];
    LinkedList *ins = new LinkedList{
        key,
        value,
        NULL,
    };
    if (curr == nullptr){
        this->buck[index] = ins;
    }
    else
    {
        while(curr->next != nullptr)
        {
            curr = curr->next;
        }
        
        curr->next = ins;
    }
}


void Stack::rehash()
{
    this->length = 2 * this->length;
    LinkedList** old = this->buck;
    this->buck = new LinkedList* [this->length];
    for (int i=0; i < this->length; i++)
    {
        LinkedList* curr = old[i];
        while(curr != nullptr)
        {
            this->insert(curr->key, curr->value);
            curr = curr->next;
        }
    }
}

