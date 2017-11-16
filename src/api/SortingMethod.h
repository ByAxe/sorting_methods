//
// Created by A.Litvinau on 16.11.2017.
//
#include <vector>

#ifndef SORTING_METHODS_SORTINGMETHOD_H
#define SORTING_METHODS_SORTINGMETHOD_H

using namespace std;

class SortingMethod {
public:

    explicit SortingMethod(vector<int> array);

    virtual void sortArray();

    const vector<int> &getArray() const;

    virtual ~SortingMethod();

protected:
    vector<int> array;
};


#endif //SORTING_METHODS_SORTINGMETHOD_H
