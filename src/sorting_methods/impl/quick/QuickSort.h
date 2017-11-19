//
// Created by A.Litvinau on 16.11.2017.
//

#ifndef SORTING_METHODS_QUICKSORT_H
#define SORTING_METHODS_QUICKSORT_H


#include "../../api/SortingMethod.h"

class QuickSort : public SortingMethod {
public:

    QuickSort(int *array, int size);

    void sortArray() override;

private:

    /**
     * 1. Takes random element from an array
     * 2. Splits an array so that all elements those are bigger than current one
     * **** placed on the right of chosen element
     * **** and those are smaller
     * **** on the left of chosen element
     * 3. Recursively applies steps 1 and 2 on the two newly created arrays
     * @param array that have to be sorted
     * @param lowerBound of a given array
     * @param upperBound of a given array
     */
    void quickSort(int *array, int lowerBound, int upperBound);

    /**
     * Splits an array so that all elements those are bigger than current one
     * ** placed on the right of chosen element
     * ** and those are smaller
     * ** on the left of chosen element
     * @param array that have to be sorted
     * @param lowerBound of a given array
     * @param upperBound of a given array
     * @return
     */
    int partition(int *array, int lowerBound, int upperBound);

    void print(int *a, int n);

};


#endif //SORTING_METHODS_QUICKSORT_H
