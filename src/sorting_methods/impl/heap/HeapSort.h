//
// Created by Litvinau Aleksei on 11/19/17.
//

#ifndef SORTING_METHODS_HEAPSORT_H
#define SORTING_METHODS_HEAPSORT_H


#include "../../api/SortingMethod.h"

class HeapSort : public SortingMethod {
public:
    explicit HeapSort(int *array, int size);

    void sortArray() override;

private:
    void heapify(int *arr, int n, int i);

    void heapSort(int *arr, int n);
};


#endif //SORTING_METHODS_HEAPSORT_H
