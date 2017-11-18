//
// Created by A.Litvinau on 16.11.2017.
//

#ifndef SORTING_METHODS_BUBBLESORT_H
#define SORTING_METHODS_BUBBLESORT_H


#include "../../api/SortingMethod.h"

class BubbleSort : public SortingMethod {
public:
    explicit BubbleSort(int *array);

    void sortArray() override;

private:
    /**
     * 1. Points on the [j]'s element of an array
     * 2. Juxtapose it with the next one ([j + 1]'s element)
     * 3. If [j]'s element bigger than [j + 1]'s element -> swap them
     * 4. Repeat steps 1-3 until the end of an array
     * 5. Set the index of the last element of an array on the position "last - 1"
     * **** (so that the end now got closer on 1 to the first element)
     * 6. Repeat steps 1-5 until first element index not equal to the last element index
     */
    void bubbleSort();
};


#endif //SORTING_METHODS_BUBBLESORT_H
