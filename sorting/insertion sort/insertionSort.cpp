int SIZE = 10;

using namespace std;

void insertionSort(int *left, int *right) {
    for (int *i = left + 1; i < right; i++) {
        int *j = i;
        while (j > left && *(j - 1) > *j) {
            swap(*(j - 1), *j);
            j--;
        }
    }
}