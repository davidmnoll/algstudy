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
    this->left = NULL;
    this->right = NULL;
};

void BinaryTree::insert(int num)
{
    // std::cout << "\n---insert\n";
    // this->output();
    // std::cout << "\n";
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
    // this->output();
    // std::cout << "\n---insert\n";
};

void BinaryTree::remove(int num)
{
    // std::cout << "\n---remove\n";
    // this->output();
    // std::cout << "\n";
    int min = this->min();

    if ( num < this->data )
    {
        if (num == min){
            if (this->left->data == num){
                if (this->left->right != NULL){
                    this->left = this->left->right;
                }else{
                    this->left = NULL;
                }
            }else{
                this->left->remove(num);
            }
        }else{
            if (this->left != NULL){
                this->left->remove( num );
            }
        }
    }
    else if ( num > this->data )
    {
        if (this->right != NULL){
            this->right->remove( num );
        }
    }else{

        if (this->right != NULL){
            this->data = this->right->min();
            if (this->right->left != NULL){
                this->right->left->remove(this->data);
            }else if (this->right->right != NULL){
                this->right = this->right->right;
            }else{
                this->right = NULL;
            }
        }
        else if (this->left != NULL){
            this->data = this->left->data;
            this->left->remove(this->data);
        }else{
            throw "Cannot remove last element";
        }
    }
    // this->output();
    // std::cout << "\n---remove\n";
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
    printf("[%d]", this->data);
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


