//
// Created by Litvinau Aleksei on 11/19/17.
//

#include <iostream>


#include "Juxtaposer.h"
#include "../sorting_methods/impl/binary_tree/BinaryTree.h"
#include "../sorting_methods/impl/bubble/BubbleSort.h"
#include "../sorting_methods/impl/quick/QuickSort.h"
#include "../sorting_methods/impl/merge/MergeSort.h"


void Juxtaposer::juxtapose() {

}

void Juxtaposer::testAllMethods(bool showArrays) {
    size = 100;

    auto *unsortedArray = new int[size];
    auto *sortedArray = new int[size];
    generateArray(unsortedArray, size);


    if (showArrays) {
        displayArray(unsortedArray);
    }

    SortingMethod *sortingMethod;

    // -------------------------------------------------


/*
    copy(unsortedArray, sortedArray);
    sortingMethod = binaryTreeSort(sortedArray);
    sortingMethod->sortArray();
    if (showArrays) {
        cout << "\n Binary Tree sorting result: ";
        sortingMethod->display();
    }
*/

    // -------------------------------------------------

    copy(unsortedArray, sortedArray);
    sortingMethod = bubbleSort(sortedArray);
    sortingMethod->sortArray();
    if (showArrays) {
        cout << "\n Bubble sorting result: ";
        sortingMethod->display();
    }

    // -------------------------------------------------

    copy(unsortedArray, sortedArray);
    sortingMethod = quickSort(sortedArray);
    sortingMethod->sortArray();
    if (showArrays) {
        cout << "\n Quick sorting result: ";
        sortingMethod->display();
    }

    // -------------------------------------------------

    copy(unsortedArray, sortedArray);
    sortingMethod = mergeSort(sortedArray);
    sortingMethod->sortArray();
    if (showArrays) {
        cout << "\n Merge sorting result: ";
        sortingMethod->display();
    }

    // -------------------------------------------------

}

void Juxtaposer::copy(const int *source, int *target) {
    for (int i = 0; i < size; ++i) {
        target[i] = source[i];
    }
}

int *Juxtaposer::generateArray(int *array, int size, int min, int max) {
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % (max - min + 1) + min;
    }

    return array;
}

void Juxtaposer::displayArray(int *array) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
}

SortingMethod *Juxtaposer::binaryTreeSort(int *array) {
    return new BinaryTree(array, size);
}

SortingMethod *Juxtaposer::bubbleSort(int *array) {
    return new BubbleSort(array, size);
}

SortingMethod *Juxtaposer::quickSort(int *array) {
    return new QuickSort(array, size);
}

SortingMethod *Juxtaposer::mergeSort(int *array) {
    return new MergeSort(array, size);
}

Juxtaposer::~Juxtaposer() = default;
