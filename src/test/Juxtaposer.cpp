//
// Created by Litvinau Aleksei on 11/19/17.
//

#include <iostream>


#include "Juxtaposer.h"
#include "../sorting_methods/impl/binary_tree/BinaryTree.h"
#include "../sorting_methods/impl/bubble/BubbleSort.h"
#include "../sorting_methods/impl/quick/QuickSort.h"
#include "../sorting_methods/impl/merge/MergeSort.h"
#include "../sorting_methods/impl/heap/HeapSort.h"
#include "../sorting_methods/impl/cycle/CycleSort.h"
#include "../sorting_methods/impl/selection/SelectionSort.h"

void Juxtaposer::juxtapose() {
    testAllMethods(false);
}

void Juxtaposer::testAllMethods(bool showArrays) {
    size = enterNumber();

    cout << "Будет сгенерирован массив размера: " << size
         << " из множества случайных чисел, в диапазоне от "
         << INT16_MIN
         << " до "
         << INT16_MAX << endl;

    auto *unsortedArray = new int[size];
    auto *sortedArray = new int[size];
    generateArray(unsortedArray, size);

    cout << "\n\tНесколько сгенерированных чисел из (неотсортированного) массива:"
         << "\n\ta[0] = " << unsortedArray[0] << ";"
         << " a[1] = " << unsortedArray[10] << ";"
         << " ... a[" << size - 1 << "] = " << unsortedArray[size - 1] << ";";

    if (showArrays) {
        displayArray(unsortedArray);
    }

    SortingMethod *sortingMethod;

    cout << "\n\n\tНазвание метода\t\t\tЗатраченное время (в миллисекундах)";

    // -------------------------------------------------


    copy(unsortedArray, sortedArray);
    sortingMethod = binaryTreeSort(sortedArray);

    clock_t start = clock();
    sortingMethod->sortArray();
    clock_t stop = clock();

    auto elapsed = static_cast<long>((stop - start) * 1000.0 / CLOCKS_PER_SEC);
    cout << "\n\tДвоичное дерево\t\t" << elapsed;

    if (showArrays) {
        cout << "\n Binary Tree sorting result: ";
        sortingMethod->display();
    }


    // -------------------------------------------------

    copy(unsortedArray, sortedArray);
    sortingMethod = bubbleSort(sortedArray);

    start = clock();
    sortingMethod->sortArray();
    stop = clock();

    elapsed = static_cast<long>((stop - start) * 1000.0 / CLOCKS_PER_SEC);
    cout << "\n\tПузырьковая\t\t\t" << elapsed;

    if (showArrays) {
        cout << "\n Bubble sorting result: ";
        sortingMethod->display();
    }

    // -------------------------------------------------

    copy(unsortedArray, sortedArray);
    sortingMethod = quickSort(sortedArray);


    start = clock();
    sortingMethod->sortArray();
    stop = clock();

    elapsed = static_cast<long>((stop - start) * 1000.0 / CLOCKS_PER_SEC);
    cout << "\n\tБыстрая\t\t\t" << elapsed;


    if (showArrays) {
        cout << "\n Quick sorting result: ";
        sortingMethod->display();
    }

    // -------------------------------------------------

    copy(unsortedArray, sortedArray);
    sortingMethod = mergeSort(sortedArray);


    start = clock();
    sortingMethod->sortArray();
    stop = clock();

    elapsed = static_cast<long>((stop - start) * 1000.0 / CLOCKS_PER_SEC);
    cout << "\n\tСлиянием\t\t\t" << elapsed;


    if (showArrays) {
        cout << "\n Merge sorting result: ";
        sortingMethod->display();
    }

    // -------------------------------------------------

    copy(unsortedArray, sortedArray);
    sortingMethod = heapSort(sortedArray);


    start = clock();
    sortingMethod->sortArray();
    stop = clock();

    elapsed = static_cast<long>((stop - start) * 1000.0 / CLOCKS_PER_SEC);
    cout << "\n\tПирамидальная\t\t\t" << elapsed;


    if (showArrays) {
        cout << "\n Heap sorting result: ";
        sortingMethod->display();
    }

    // -------------------------------------------------

    copy(unsortedArray, sortedArray);
    sortingMethod = cycleSort(sortedArray);


    start = clock();
    sortingMethod->sortArray();
    stop = clock();

    elapsed = static_cast<long>((stop - start) * 1000.0 / CLOCKS_PER_SEC);
    cout << "\n\tЦиклическая\t\t\t" << elapsed;


    if (showArrays) {
        cout << "\n Cycle sorting result: ";
        sortingMethod->display();
    }

    // -------------------------------------------------

    copy(unsortedArray, sortedArray);
    sortingMethod = selectionSort(sortedArray);


    start = clock();
    sortingMethod->sortArray();
    stop = clock();

    elapsed = static_cast<long>((stop - start) * 1000.0 / CLOCKS_PER_SEC);
    cout << "\n\tВыборочная\t\t" << elapsed;


    if (showArrays) {
        cout << "\n Selection sorting result: ";
        sortingMethod->display();
    }

    // -------------------------------------------------

    cout << "\nНаиболее эффективным методом сортировки является - Быстрая сортировка" << endl;
}

void Juxtaposer::copy(const int *source, int *target) {
    for (int i = 0; i < size; ++i) {
        target[i] = source[i];
    }
}

int *Juxtaposer::generateArray(int *array, int size, int min, int max) {
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % (max - min + 1) + min;
    }

    return array;
}

void Juxtaposer::displayArray(int *array) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
}

SortingMethod *Juxtaposer::binaryTreeSort(int *array) {
    return new BinaryTree(array, size);
}

SortingMethod *Juxtaposer::bubbleSort(int *array) {
    return new BubbleSort(array, size);
}

SortingMethod *Juxtaposer::quickSort(int *array) {
    return new QuickSort(array, size);
}

SortingMethod *Juxtaposer::mergeSort(int *array) {
    return new MergeSort(array, size);
}

SortingMethod *Juxtaposer::heapSort(int *array) {
    return new HeapSort(array, size);
}

SortingMethod *Juxtaposer::cycleSort(int *array) {
    return new CycleSort(array, size);
}

SortingMethod *Juxtaposer::selectionSort(int *array) {
    return new SelectionSort(array, size);
}

int Juxtaposer::enterNumber() {
    cout << "Введите размер массива который будет сгенерирован автоматически: ";
    cin >> size;
    return size;
}

Juxtaposer::~Juxtaposer() = default;
