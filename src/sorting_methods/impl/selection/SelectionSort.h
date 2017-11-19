//
// Created by Litvinau Aleksei on 11/19/17.
//

#ifndef SORTING_METHODS_SELECTIONSORT_H
#define SORTING_METHODS_SELECTIONSORT_H


#include "../../api/SortingMethod.h"

class SelectionSort : public SortingMethod {
public:
    explicit SelectionSort(int *array, int size);

    void sortArray() override;

private:
    void selectionSort(int *array, int size);

    void swap(int *xp, int *yp);
};


#endif //SORTING_METHODS_SELECTIONSORT_H
