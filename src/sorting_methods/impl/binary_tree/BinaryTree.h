//
// Created by Litvinau Aleksei on 11/19/17.
//

#ifndef SORTING_METHODS_BINARYTREE_H
#define SORTING_METHODS_BINARYTREE_H


#include "../../api/SortingMethod.h"

class BinaryTree : public SortingMethod {
public:
    explicit BinaryTree(int *array, int size);

    void sortArray() override;

private:
    struct Node {
        int key;
        struct Node *left, *right;
    };

    // A utility function to create a new BST Node
    struct Node *newNode(int item) {
        auto *temp = new Node;
        temp->key = item;
        temp->left = temp->right = nullptr;
        return temp;
    }

    void binaryTreeSort(int array[], int size);

    Node *insert(Node *node, int key);

    void storeSorted(Node *root, int arr[], int &i);
};


#endif //SORTING_METHODS_BINARYTREE_H
