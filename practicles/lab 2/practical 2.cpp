//add from beginning
#include <iostream>
using namespace std;

int main() {
    const int MAX= 50;
    int arr[MAX] = {10, 20, 30};
    int size = 3;
    int inew = 5;
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = inew;
    size++;
    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
