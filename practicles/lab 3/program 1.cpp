#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows & columns: ";
    cin >> r >> c;
    int a[50][50];
    cout << "Enter elements:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> a[i][j];
        }
    }
    cout << "Matrix elements:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
