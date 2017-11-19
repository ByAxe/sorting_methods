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

    void display() override;

private:
    void binaryTreeSort(int array[], int size);

    struct node {
        int currentValue;
        node *Left, *Right;
    };

    void insert1(int);

    node *insert2(node *, node *);

    void display(node *t);

    node *root;
};


#endif //SORTING_METHODS_BINARYTREE_H
