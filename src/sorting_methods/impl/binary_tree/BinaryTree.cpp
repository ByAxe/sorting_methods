//
// Created by Litvinau Aleksei on 11/19/17.
//

#include <iostream>
#include "BinaryTree.h"

using namespace std;

BinaryTree::BinaryTree(int *array, int size) : SortingMethod(array, size) {}

void BinaryTree::sortArray() {
    binaryTreeSort(array, size);
}

// Stores inoder traversal of the BST
// in arr[]
void BinaryTree::storeSorted(BinaryTree::Node *root, int arr[], int &i) {
    if (root != nullptr) {
        storeSorted(root->left, arr, i);
        arr[i++] = root->key;
        storeSorted(root->right, arr, i);
    }
}

/* A utility function to insert a new
   Node with given key in BST */
BinaryTree::Node *BinaryTree::insert(BinaryTree::Node *node, int key) {
    /* If the tree is empty, return a new Node */
    if (node == nullptr) return newNode(key);

    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    /* return the (unchanged) Node pointer */
    return node;
}

// This function sorts arr[0..n-1] using Tree Sort
void BinaryTree::binaryTreeSort(int *arr, int size) {
    struct BinaryTree::Node *root = nullptr;

    // Construct the BST
    root = insert(root, arr[0]);
    for (int i = 1; i < size; i++)
        insert(root, arr[i]);

    // Store inoder traversal of the BST
    // in arr[]
    int i = 0;
    storeSorted(root, arr, i);
}