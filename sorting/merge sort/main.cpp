#include <iostream>
#include <vector>

#include "mergeSort.cpp"

using namespace std;


int main() {
    vector<int> vect;

    for (int i = SIZE; i > 0; i--) { vect.push_back(rand()); }
    for (int i = 0; i < SIZE; i++) { i == SIZE - 1 ? cout << vect.at(i) << "." : cout << vect.at(i) << ", "; }
    cout << "\n";

    int *dop = &vect.at(vect.size() - 1);

    mergeSort(&vect.at(0), ++dop);

    for (int i = 0; i < SIZE; i++) { i == SIZE - 1 ? cout << vect.at(i) << ".\n" : cout << vect.at(i) << ", "; }

    return 0;
}


/*
    41, 18467, 6334, 26500, 19169, 15724, 11478, 29358, 26962, 24464
    mergeSort(0, 10)
    _mergeSort(0, 10)
    m = 5 l = 0 r = 10
    _mergeSort(0, 10) -> _mergeSort(0, 5)
    m = 2 l = 0 r = 5
    _mergeSort(0, 10) -> _mergeSort(0, 5) -> _mergeSort(0, 2)
    m = 1 l = 0 r = 2
    _mergeSort(0, 10) -> _mergeSort(0, 5) -> _mergeSort(0, 2) -> _mergeSort(0, 1)
    _mergeSort(0, 10) -> _mergeSort(0, 5) -> _mergeSort(0, 2) -> _mergeSort(1, 2)
    _mergeSort(0, 10) -> _mergeSort(0, 5) -> _mergeSort(0, 2) -> merge(0, 1, 2, temp)
    cl = 0 cr = 1 cur = 0
    temp[0] = 41 cl = 1 cur = 1
    temp[1] = 18467 cr = 2 cur = 2
    41 18467
    _mergeSort(0, 10) -> _mergeSort(0, 5) -> _mergeSort(2, 5)
    m = 3 l = 2 r = 5
    _mergeSort(0, 10) -> _mergeSort(0, 5) -> _mergeSort(2, 5) -> _mergeSort(2, 3)
    _mergeSort(0, 10) -> _mergeSort(0, 5) -> _mergeSort(2, 5) -> _mergeSort(3, 5)
    m = 4 l = 3 r = 5
    _mergeSort(0, 10) -> _mergeSort(0, 5) -> _mergeSort(2, 5) -> _mergeSort(3, 5) -> _mergeSort(3, 4)
    _mergeSort(0, 10) -> _mergeSort(0, 5) -> _mergeSort(2, 5) -> _mergeSort(3, 5) -> _mergeSort(4, 5)
    _mergeSort(0, 10) -> _mergeSort(0, 5) -> _mergeSort(2, 5) -> _mergeSort(3, 5) -> merge(3, 4, 5, temp)
    cl = 3 cr = 4 cur = 0
    temp[0] = 19169 cr = 5 cur = 1
    temp[1] = 26500 cl = 4 cur = 2
    41 18467 6334 19169 26500
    _mergeSort(0, 10) -> _mergeSort(0, 5) -> _mergeSort(2, 5) -> merge(2, 3, 5, temp)
    cl = 2 cr = 3 cur = 0
    temp[0] = 6334 cl = 3 cur = 1
    temp[1] = 19169 cr = 4 cur = 2
    temp[2] = 26500 cr = 5 cur = 3
    41 18467 6334 19169 26500
    _mergeSort(0, 10) -> _mergeSort(0, 5) -> merge(0, 2, 5, temp)
    cl = 0 cr = 2 cur = 0
    temp[0] = 41 cl = 1 cur = 1
    temp[1] = 6334 cr = 3 cur = 2
    temp[2] = 18467 cl = 2 cur = 3
    temp[3] = 19169 cr = 4 cur = 4
    temp[4] = 26500 cr = 5 cur = 5
    41 6334 18467 19169 26500

    15724, 11478, 29358, 26962, 24464
    _mergeSort(0, 10) -> _mergeSort(5, 10)
    m = 7 l = 5 r = 10
    _mergeSort(0, 10) -> _mergeSort(5, 10) -> _mergeSort(5, 7)
    m = 6 l = 5 r = 7
    _mergeSort(0, 10) -> _mergeSort(5, 10) -> _mergeSort(5, 7) -> _mergeSort(5, 6)
    _mergeSort(0, 10) -> _mergeSort(5, 10) -> _mergeSort(5, 7) -> _mergeSort(6, 7)
    _mergeSort(0, 10) -> _mergeSort(5, 10) -> _mergeSort(5, 7) -> merge(5, 6, 7, temp)
    cl = 5 cr = 6 cur = 0
    temp[0] = 11478 cr = 7 cur = 1
    temp[1] = 15724 cl = 6 cur = 2
    11478 15724
    _mergeSort(0, 10) -> _mergeSort(5, 10) -> _mergeSort(7, 10)
    m = 8 l = 7 r = 10
    _mergeSort(0, 10) -> _mergeSort(5, 10) -> _mergeSort(7, 10) -> _mergeSort(7, 8)
    _mergeSort(0, 10) -> _mergeSort(5, 10) -> _mergeSort(7, 10) -> _mergeSort(8, 10)
    m = 9 l = 8 r = 10
    _mergeSort(0, 10) -> _mergeSort(5, 10) -> _mergeSort(7, 10) -> _mergeSort(8, 10) -> _mergeSort(8, 9)
    _mergeSort(0, 10) -> _mergeSort(5, 10) -> _mergeSort(7, 10) -> _mergeSort(8, 10) -> _mergeSort(9, 10)
    _mergeSort(0, 10) -> _mergeSort(5, 10) -> _mergeSort(7, 10) -> _mergeSort(8, 10) -> merge(8, 9, 10, temp)
    cl = 8 cr = 9 cur = 0
    temp[0] = 24464 cr = 10 cur = 1
    temp[1] = 26962 cl = 9 сгк = 2
    24464 26962
    _mergeSort(0, 10) -> _mergeSort(5, 10) -> _mergeSort(7, 10) -> merge(7, 8, 10, temp)
    cl = 7 cr = 8 cur = 0
    temp[0] = 24464 cr = 9 cur = 1
    temp[1] = 26962 cr = 10 сur = 2
    temp[2] = 29358 cl = 8 cur = 3
    24464 26962 29358
    _mergeSort(0, 10) -> _mergeSort(5, 10) -> merge(5, 7, 10, temp)
    cl = 5 cr = 7 cur = 0
    temp[0] = 11478 cl = 6 cur = 1
    temp[1] = 15724 cl = 7 сur = 2
    temp[2] = 24464 cr = 8 cur = 3
    temp[3] = 26962 cr = 9 cur = 4
    temp[4] = 29358 cr = 10 сur = 5

    41 6334 18467 19169 26500 // 11478 15724 24464 26962 29358
    _mergeSort(0, 10) -> merge(0, 5, 10, temp)
    cl = 0 cr = 5 cur = 0
    temp[0] = 41 cl = 1 cur = 1
    temp[1] = 6334 cl = 2 сur = 2
    temp[2] = 11478 cr = 6 cur = 3
    temp[3] = 15724 cr = 7 cur = 4
    temp[4] = 18467 cl = 3 сur = 5
    temp[5] = 19169 cl = 4 cur = 6
    temp[6] = 24464 cr = 8 сur = 7
    temp[7] = 26500 cl = 5 cur = 8
    temp[8] = 26962 cr = 9 cur = 9
    temp[9] = 29358 cr = 10 сur = 10
    41, 6334, 11478, 15724, 18467, 19169, 24464, 26500, 26962, 29358
*/