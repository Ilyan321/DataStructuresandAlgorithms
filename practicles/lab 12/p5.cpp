#include <iostream>
#include <string>
using namespace std;

void merge(string a[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    string L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = a[l + i];
    for (int j = 0; j < n2; j++) R[j] = a[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) a[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) a[k++] = L[i++];
    while (j < n2) a[k++] = R[j++];
}

void mergeSort(string a[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main() {
    string a[] = {"Apple", "Zebra", "Mango", "Banana"};
    int n = 4;
    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}