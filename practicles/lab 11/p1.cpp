#include <iostream>

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            count++;
            if (arr[j] < arr[min_idx]) min_idx = j;
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < n; i++) std::cout << arr[i] << " ";
    std::cout << "\nComparisons: " << count;

    return 0;
}