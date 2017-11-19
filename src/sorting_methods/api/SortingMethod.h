//
// Created by A.Litvinau on 16.11.2017.
//
#include <vector>

#ifndef SORTING_METHODS_SORTINGMETHOD_H
#define SORTING_METHODS_SORTINGMETHOD_H

using namespace std;

class SortingMethod {
public:
    explicit SortingMethod(int *array, int size);

    /**
     * Sorts given in constructor array with specified method in concrete implementation
     */
    virtual void sortArray();

    /**
     * Getter for an array
     * @return
     */
    vector<int> getArray();

    virtual ~SortingMethod();

    virtual void display();

protected:

    int *array;

    int size;
};


#endif //SORTING_METHODS_SORTINGMETHOD_H
