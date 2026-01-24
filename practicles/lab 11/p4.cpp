#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    int data[] = {64, 25, 12, 22, 11};
    int n = 5, a[5], b[5], c[5];
    for(int i=0; i<n; i++) a[i] = b[i] = c[i] = data[i];

    auto start = high_resolution_clock::now();
    for (int i = 0; i < n - 1; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++) if (a[j] < a[m]) m = j;
        int t = a[m]; a[m] = a[i]; a[i] = t;
    }
    auto stop = high_resolution_clock::now();
    cout << "Selection Sort: " << duration_cast<nanoseconds>(stop - start).count() << " ns" << endl;

    start = high_resolution_clock::now();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (b[j] > b[j + 1]) {
                int t = b[j]; b[j] = b[j + 1]; b[j + 1] = t;
            }
        }
    }
    stop = high_resolution_clock::now();
    cout << "Bubble Sort: " << duration_cast<nanoseconds>(stop - start).count() << " ns" << endl;

    start = high_resolution_clock::now();
    for (int i = 1; i < n; i++) {
        int k = c[i], j = i - 1;
        while (j >= 0 && c[j] > k) {
            c[j + 1] = c[j];
            j--;
        }
        c[j + 1] = k;
    }
    stop = high_resolution_clock::now();
    cout << "Insertion Sort: " << duration_cast<nanoseconds>(stop - start).count() << " ns" << endl;

    return 0;
}