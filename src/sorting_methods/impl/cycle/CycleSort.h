//
// Created by Litvinau Aleksei on 11/19/17.
//

#ifndef SORTING_METHODS_CYCLESORT_H
#define SORTING_METHODS_CYCLESORT_H


#include "../../api/SortingMethod.h"

class CycleSort : public SortingMethod {
public:
    CycleSort(int *array, int size);

    void sortArray() override;

private:
    void cycleSort(int *array, int size);
};


#endif //SORTING_METHODS_CYCLESORT_H
