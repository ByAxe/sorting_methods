//
// Created by Litvinau Aleksei on 11/19/17.
//

#ifndef SORTING_METHODS_JUXTAPOSER_H
#define SORTING_METHODS_JUXTAPOSER_H


#include "../sorting_methods/api/SortingMethod.h"

class Juxtaposer {
public:
    void juxtapose();

    void testAllMethods(bool showArrays);

    virtual ~Juxtaposer();

private:
    int size;

    SortingMethod *binaryTreeSort(int *array);

    SortingMethod *bubbleSort(int *array);

    SortingMethod *quickSort(int *array);

    SortingMethod *mergeSort(int *array);

    SortingMethod *heapSort(int *array);

    SortingMethod *cycleSort(int *array);

    void displayArray(int *array);

    int *generateArray(int *array, int size, int min = INT16_MIN, int max = INT16_MAX);

    void copy(const int *source, int *target);
};


#endif //SORTING_METHODS_JUXTAPOSER_H
