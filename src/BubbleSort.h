//
// Created by A.Litvinau on 16.11.2017.
//

#ifndef SORTING_METHODS_BUBBLESORT_H
#define SORTING_METHODS_BUBBLESORT_H


#include "api/SortingMethod.h"

class BubbleSort : public SortingMethod {
public:
    explicit BubbleSort(const vector<int> &array);

    void sortArray() override;
};


#endif //SORTING_METHODS_BUBBLESORT_H
