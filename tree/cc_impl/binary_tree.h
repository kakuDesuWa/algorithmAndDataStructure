//
// Created by kaku on 2019/10/27.
//

#ifndef DSA_BINARY_TREE_H
#define DSA_BINARY_TREE_H

#include <vector>
#include <iostream>

using namespace std;

typedef int ElemType;

typedef struct BiTNode {
    ElemType data;
    struct BiTNode *lchild, *rchild;

    BiTNode(ElemType d) : data(d), lchild(nullptr), rchild(nullptr) {}
} BiTNode, *BiTree;

BiTree init_tree_from_array(vector<int>);

void pre_order_recursive(BiTree);

void pre_order(BiTree);

void in_order_recursive(BiTree);

void in_order(BiTree);

void post_order_recursive(BiTree);

void post_order(BiTree);

void level_order(BiTree);

void show_tree_node(BiTNode *);

template<class T>
void print_vector(const vector<T> &v);

#endif //DSA_BINARY_TREE_H
