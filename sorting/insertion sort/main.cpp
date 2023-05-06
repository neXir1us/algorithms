#include <iostream>
#include <vector>

#include "insertionSort.cpp"

using namespace std;

void insertionSort(int *left, int *right);

int main() {
    vector<int> vect;

    for (int i = SIZE; i > 0; i--) { vect.push_back(rand()); }
    for (int i = 0; i < SIZE; i++) { cout << vect.at(i) << ", "; }
    cout << "\n";

    int *dop = &vect.at(vect.size() - 1);

    insertionSort(&vect.at(0), ++dop);

    for (int i = 0; i < SIZE; i++) { cout << vect.at(i) << ", "; }
    cout << "\n";

    return 0;
}