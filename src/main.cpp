#include <iostream>
#include "impl/bubble/BubbleSort.h"
#include "impl/quick/QuickSort.h"

using namespace std;

int main() {
    vector<int> array = {7, 5, 17, 0, 100, 1000, 1000, 12, 1, 6, 4};

    SortingMethod *sortingMethod = new QuickSort(array);
    sortingMethod->sortArray();

    vector<int> sortedArray = sortingMethod->getArray();

    return 0;
}