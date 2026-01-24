#include <iostream>

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    int count = 0;

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            count++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        if (j >= 0) count++;
        arr[j + 1] = key;

        std::cout << "Step " << i << ": ";
        for (int k = 0; k < n; k++) std::cout << arr[k] << " ";
        std::cout << std::endl;
    }

    std::cout << "Total comparisons: " << count << std::endl;
    return 0;
}