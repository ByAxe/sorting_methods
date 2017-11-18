#include <iostream>
#include "impl/bubble/BubbleSort.h"
#include "impl/quick/QuickSort.h"

using namespace std;

int main() {
    int array[] = {110, 5, 10, 3, 22, 100, 1, 23};
    int sz = sizeof(array) / sizeof(array[0]);

    SortingMethod *sortingMethod = new QuickSort(array, sz);
    sortingMethod->sortArray();

    vector<int> sortedArray = sortingMethod->getArray();

    return 0;
}