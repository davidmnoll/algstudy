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
    void insert(int node);
    void remove(int node );
    bool search(int node);
    void output(void);
    BinaryTree(void);


};



#endif /* binarytree_hpp */
