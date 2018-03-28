//
//  redblacktree.cpp
//  algStudy
//
//  Created by David on 3/27/18.
//  Copyright © 2018 davidmnoll. All rights reserved.
//

#include <iostream>
#include "binarytree.hpp"


BinaryTree::BinaryTree(int init)
{
    this->data = init;
};

void BinaryTree::insert(int num)
{
    if( num <= this->data )
    {
        if ( this->left != NULL)
        {
            this->left->insert(num);
        }
        else
        {
            BinaryTree * newTree = new BinaryTree(num);
            this->left = newTree;
        }
    }
    else
    {
        if ( this->right != NULL)
        {
            this->right->insert(num);
        }
        else
        {
            BinaryTree * newTree = new BinaryTree(num);
            this->right = newTree;
        }
    }
};

void BinaryTree::remove(int num)
{
    if ( num < this->data )
    {
        this->left->remove( num );
    }
    else if ( num > this->data )
    {
        this->right->remove( num );
    }
    else
    {
        if ( this->left == NULL && this->right != NULL )
        {
            *this = *this->right;
        }
        else if ( this->right == NULL && this->left != NULL)
        {
            *this = *this->left;
        }
        else{
            this->data = this->right->min();
            this->right->remove(this->data);
        }
        
    }
};

bool BinaryTree::search(int num)
{
    if ( num < this->data )
    {
        if ( this->left != NULL )
        {
            return this->left->search( num );
        }
        else
        {
            return false;
        }
    }
    else if ( num > this->data )
    {
        if ( this->right != NULL )
        {
            return this->right->search( num );
        }
        else
        {
            return false;
        }
    }
    else
    {
        return true;
    }
};

void BinaryTree::output(void)
{

    if ( this->left != NULL )
    {
        std::cout << "(";
        this->left->output();
        std::cout << ")";

    }
    std::cout << this->data;
    if ( this->right != NULL )
    {
        std::cout << "(";
        this->right->output();
        std::cout << ")";
    }
};

int BinaryTree::min(void)
{
    if ( this->left != NULL)
    {
        return this->left->min();
    }
    else
    {
        return this->data;
    }
};


