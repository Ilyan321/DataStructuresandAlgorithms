#include <iostream>
#include <cstdlib>
#include <ctime>

int partition(int a[], int low, int high) {
    int r = low + rand() % (high - low);
    std::swap(a[r], a[high]);
    int pivot = a[high], i = low - 1;
    for (int j = low; j < high; j++) {
        if (a[j] < pivot) std::swap(a[++i], a[j]);
    }
    std::swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

int main() {
    srand(time(0));
    int a[] = {10, 7, 8, 9, 1, 5}, n = 6;
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) std::cout << a[i] << " ";
    return 0;
}