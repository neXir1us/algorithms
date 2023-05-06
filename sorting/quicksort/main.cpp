#include <iostream>
#include <vector>

#include "quickSort.cpp"

using namespace std;

void quickSort(int *left, int *right);

int main() {
    vector<int> vect;

    for (int i = SIZE; i > 0; i--) { vect.push_back(rand()); }
    for (int i = 0; i < SIZE; i++) { i == SIZE - 1 ? cout << vect.at(i) << "." : cout << vect.at(i) << ", "; }
    cout << "\n";

    int *dop = &vect.at(vect.size() - 1);

    quickSort(&vect.at(0), ++dop);

    for (int i = 0; i < SIZE; i++) { i == SIZE - 1 ? cout << vect.at(i) << ".\n" : cout << vect.at(i) << ", "; }

    return 0;
}


/*
    quickSort(0, 10)
    41, 18467, 6334, 26500, 19169, 15724, 11478, 29358, 26962, 24464
    z = 5: 15724 ll = 0: 41 rr = 9: 24464
    ll = 1: 18467 rr = 6: 11478
    41, 11478, 6334, 26500, 19169, 15724, 18467, 29358, 26962, 24464
    ll = 2: 6334 rr = 5: 15724
    ll = 3: 26500 rr = 5: 15724
    41, 11478, 6334, 15724, 19169, 26500, 18467, 29358, 26962, 24464
    z = 5: 26500 ll = 4: 19169 rr = 4: 19169
    ll = 5: 26500 rr = 4: 19169
    quickSort(0, 10) -> 1: quickSort(0, 5)
    z = 2: 6334 ll = 0: 41 rr = 4: 19169
    ll = 1: 11478 rr = 2: 6334
    41, 6334, 11478, 15724, 19169, 26500, 18467, 29358, 26962, 24464
    z = 2: 11478 ll = 2: 11478 rr = 1: 6334
    quickSort(0, 10) -> 1: quickSort(0, 5) -> 1: quickSort(0, 1)
    quickSort(0, 10) -> 1: quickSort(0, 5) -> 2: quickSort(2, 5)
    z = 3: 15724 ll = 2: 11478 rr = 4: 19169
    ll = 3: 15724 rr = 3: 15724
    41, 6334, 11478, 15724, 19169, 26500, 18467, 29358, 26962, 24464
    ll = 4: 19169 rr = 2: 11478
    quickSort(0, 10) -> 1: quickSort(0, 5) -> 2: quickSort(2, 5) -> quickSort(4, 5)
    quickSort(0, 10) -> 2: quickSort(5, 10)
    z = 7: 29358 ll = 5: 26500 rr = 9: 24464
    ll = 7: 29358 rr = 9: 24464
    41, 6334, 11478, 15724, 19169, 26500, 18467, 24464, 26962, 29358
    z = 7: 24464 ll = 8: 26962 rr = 8: 26962
    ll = 8: 26962 rr = 7: 24464
    quickSort(0, 10) -> 2: quickSort(5, 10) -> 1: quickSort(5, 8)
    z = 6: 18467 ll = 5: 26500 rr = 7: 24464
    ll = 5: 26500 rr = 6: 18467
    41, 6334, 11478, 15724, 19169, 18467, 26500, 24464, 26962, 29358
    z = 6: 26500 ll = 6: 26500 rr = 5: 18467
    quickSort(0, 10) -> 2: quickSort(5, 10) -> 1: quickSort(5, 8) -> 1: quickSort(6, 8)

    quickSort(0, 10) -> 2: quickSort(5, 10) -> 2: quickSort()





    35 67 24 50
    quickSort(0, 4)
    z = 2: 24 ll = 0: 35 rr = 3: 50
    ll = 0: 35 rr = 2: 24
    24 67 35 50
    z = 2: 35 ll = 1: 67 rr = 1: 67
    ll = 1: 67 rr = 0: 24
    quickSort(0, 4) -> 2: quickSort(1, 4)
    z = 2: 35 ll = 1: 67 rr = 3: 50
    ll = 1: 67 rr = 2: 35
    24 35 67 50
    z = 2: 67 ll = 2: 67 rr = 1: 35
    quickSort(0, 4) -> 2: quickSort(1, 4) -> 2: quickSort(2, 4)
    z = 3: 67 ll = 2: 67 rr = 3: 50
    24 35 50 67
    ll = 3: 67 rr = 2: 50

    24 35 67 50


    41, 6334, 11478, 15724, 18467, 19169, 24464, 26500, 26962, 29358
*/