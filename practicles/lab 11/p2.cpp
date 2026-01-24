#include <iostream>

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            count++;
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        std::cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) std::cout << arr[k] << " ";
        std::cout << std::endl;
    }

    std::cout << "Total comparisons: " << count << std::endl;
    return 0;
}