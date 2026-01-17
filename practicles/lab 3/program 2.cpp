#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter n (square matrix): ";
    cin>>n;
    int a[50][50];

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(i==j) sum += a[i][j];
        }
    }

    cout<<"Diagonal Sum = "<<sum;
}
