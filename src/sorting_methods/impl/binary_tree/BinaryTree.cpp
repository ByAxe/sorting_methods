//
// Created by Litvinau Aleksei on 11/19/17.
//

#include <iostream>
#include "BinaryTree.h"

BinaryTree::BinaryTree(int *array, int size) : SortingMethod(array, size) {}

void BinaryTree::sortArray() {
    binaryTreeSort(array, size);
}

void BinaryTree::binaryTreeSort(int *array, int size) {
    for (int i = 0; i < size; i++) {
        insert1(array[i]);
    }
}

BinaryTree::node *BinaryTree::insert2(BinaryTree::node *temp, node *newNode) {
    if (temp == nullptr) {
        temp = newNode;
    } else if (temp->currentValue < newNode->currentValue) {
        insert2(temp->Right, newNode);
        if (temp->Right == nullptr)
            temp->Right = newNode;
    } else {
        insert2(temp->Left, newNode);
        if (temp->Left == nullptr)
            temp->Left = newNode;
    }
    return temp;
}

void BinaryTree::insert1(int value) {
    node *temp = root, *newNode;
    newNode = new node;
    newNode->Left = nullptr;
    newNode->Right = nullptr;
    newNode->currentValue = value;
    root = insert2(temp, newNode);
}

void BinaryTree::display() {
    display(root);
}

void BinaryTree::display(node *t) {
    if (root == nullptr) {
        cout << "Nothing to display";
    } else if (t != nullptr) {
        display(t->Left);
        cout << t->currentValue << " ";
        display(t->Right);
    }
}