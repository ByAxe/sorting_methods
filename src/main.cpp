#include <iostream>
#include "impl/bubble/BubbleSort.h"
#include "impl/quick/QuickSort.h"

using namespace std;

int main() {
    vector<int> array = {7, 5, 17, 0};

    SortingMethod *sortingMethod = new QuickSort(array);
    sortingMethod->sortArray();

    vector<int> sortedArray = sortingMethod->getArray();

    return 0;
}