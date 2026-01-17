#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n (square matrix): ";
    cin>>n;
    int a[50][50];

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Matrix rotated 90 degree:\n";
    for(int j=0;j<n;j++){
        for(int i=n-1;i>=0;i--){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
