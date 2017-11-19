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
    void mergeHelper(int *array, int left, int right, int *scratch);

    int mergeSort(int *array, int size);

    void revertArray();
};


#endif //SORTING_METHODS_MERGESORT_H
