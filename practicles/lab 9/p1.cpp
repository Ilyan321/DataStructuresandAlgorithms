#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class LargeScaleSearch {
public:
    void runTest(int size) {
        vector<int> v(size);
        for(int i = 0; i < size; i++) v[i] = i * 2; 
        
        int key = v[size - 1]; 
        int l = 0, r = size - 1, comps = 0;
        
        while(l <= r) {
            comps++;
            int m = l + (r - l) / 2;
            if(v[m] == key) break;
            if(v[m] < key) l = m + 1;
            else r = m - 1;
        }
        cout << "Array Size: " << size << " | Comparisons: " << comps << endl;
    }
};

int main() {
    LargeScaleSearch lss;
    lss.runTest(10000); 
    return 0;
}