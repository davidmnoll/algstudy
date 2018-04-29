//
//  redblacktree.hpp
//  algStudy
//
//  Created by David on 3/27/18.
//  Copyright © 2018 davidmnoll. All rights reserved.
//

#ifndef binarytree_hpp
#define binarytree_hpp

#include <stdio.h>

class BinaryTree
{
private:
    BinaryTree *left;
    BinaryTree *right;
    
public:
    BinaryTree(int init);
    int data;
    void insert(int num);
    void remove(int nnum );
    bool search(int num);
    void output(void);
    int min(void);
};



#endif /* binarytree_hpp */
