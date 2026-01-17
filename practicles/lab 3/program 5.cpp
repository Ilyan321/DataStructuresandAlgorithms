#include <iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter rows & columns: ";
    cin>>r>>c;
    int a[50][50];

    cout<<"Enter elements:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Row Sums:\n";
    for(int i=0;i<r;i++){
        int s=0;
        for(int j=0;j<c;j++) s+=a[i][j];
        cout<<"Row "<<i<<" = "<<s<<endl;
    }

    cout<<"Column Sums:\n";
    for(int j=0;j<c;j++){
        int s=0;
        for(int i=0;i<r;i++) s+=a[i][j];
        cout<<"Column "<<j<<" = "<<s<<endl;
    }
}
