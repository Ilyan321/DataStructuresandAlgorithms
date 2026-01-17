#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n (square matrix): ";
    cin>>n;
    int a[50][50];
    bool flag = true;

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] != a[j][i]){
                flag = false;
            }
        }
    }

    if(flag) cout<<"Matrix is Symmetric";
    else cout<<"Matrix is NOT Symmetric";
}
