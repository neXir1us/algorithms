int SIZE = 10;

using namespace std;

void mergeSort(int *left, int *right);
void _mergeSort(int *left, int *right, int *temp);
void merge(int *left, int *middle, int *right, int *temp);

void mergeSort(int *left, int *right) {
    int *temp = new int[right - left];
    _mergeSort(left, right, temp);
    delete temp;
}

void _mergeSort(int *left, int *right, int *temp) {
    if (right - left <= 1) return;
    int *middle = left + (right - left) / 2;

    _mergeSort(left, middle, temp);
    _mergeSort(middle, right, temp);
    merge(left, middle, right, temp);
}

void merge(int *left, int *middle, int *right, int *temp) {
    int *curLeft = left, *curRight = middle, cur = 0;

    while (curLeft < middle && curRight < right) {
        if (*curLeft < *curRight) temp[cur++] = *curLeft, curLeft++;
        else temp[cur++] = *curRight, curRight++;
    }
    while (curLeft < middle) temp[cur++] = *curLeft, curLeft++;
    while (curRight < right) temp[cur++] = *curRight, curRight++;

    cur = 0;
    for (int *minCur = left; minCur < right; minCur++) {
        *minCur = temp[cur++];
        cout << *minCur << " ";
    }
    cout << endl;
}