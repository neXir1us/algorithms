int SIZE = 10;

using namespace std;

void quickSort(int *left, int *right) {
    if (right - left <= 1) return;
    int middle = *(left + (right - left) / 2);
    int *leftNew = left, *rightNew = right - 1;

    while (leftNew <= rightNew) {
        while (*leftNew < middle) { leftNew++; }
        while (*rightNew > middle) { rightNew--; }

        if (leftNew <= rightNew) {
            swap(*leftNew, *rightNew);

            leftNew++; rightNew--;
        }
    }
    if (left < rightNew) quickSort(left, rightNew + 1);
    if (leftNew < right) quickSort(leftNew, right);
}