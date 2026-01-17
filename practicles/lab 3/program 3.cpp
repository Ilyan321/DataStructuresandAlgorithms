#include <iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter rows & cols: ";
    cin>>r>>c;
    int a[50][50], mn=999999, mx=-999999;

    cout<<"Enter elements:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
            if(a[i][j] < mn) mn = a[i][j];
            if(a[i][j] > mx) mx = a[i][j];
        }
    }

    cout<<"Smallest = "<<mn<<endl;
    cout<<"Largest = "<<mx;
}
