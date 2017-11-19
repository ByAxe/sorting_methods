//
// Created by Litvinau Aleksei on 11/19/17.
//

#ifndef SORTING_METHODS_MERGESORT_H
#define SORTING_METHODS_MERGESORT_H


#include "../../api/SortingMethod.h"

class MergeSort : public SortingMethod {
public:
    explicit MergeSort(int *array, int size);

    void sortArray() override;

private:
    void merge(int *arr, int l, int m, int r);

    void mergeSort(int *arr, int l, int r);
};


#endif //SORTING_METHODS_MERGESORT_H
