#include <iostream>
#include "BubbleSort.h"

using namespace std;

int main() {
    vector<int> array = {7, 5, 17, 6};

    SortingMethod *bubbleSort = new BubbleSort(array);
    bubbleSort->sortArray();

    return 0;
}