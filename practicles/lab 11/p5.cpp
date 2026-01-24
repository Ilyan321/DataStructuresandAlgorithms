#include <iostream>

int main() {
    int arr[] = {11, 22, 12, 25, 64};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        std::cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) std::cout << arr[k] << " ";
        std::cout << std::endl;
    }

    return 0;
}