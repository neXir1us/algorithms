int SIZE = 10;

using namespace std;


void bubbleSort(int *left, int *right) {
    if (right - left <= 1) return;
    bool check = true;
    while (check) {
        check = false;
        for (int *i = left; i + 1 < right; i++) if (*i > *(i + 1)) swap(*i, *(i + 1)), check = true;
        right--;
    }
}