#include <iostream>

int partition(int a[], int low, int high) {
    int temp = a[low]; a[low] = a[high]; a[high] = temp;
    int pivot = a[high], i = low - 1;
    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            int t = a[i]; a[i] = a[j]; a[j] = t;
        }
    }
    int t = a[i + 1]; a[i + 1] = a[high]; a[high] = t;
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
    int a[] = {10, 80, 30, 90, 40}, n = 5;
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) std::cout << a[i] << " ";
    return 0;
}