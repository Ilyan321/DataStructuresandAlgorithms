#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
for(int i=0;i<5;i++){
cout<<arr[i]<<" ";}
cout<<endl;
int value;int pos;
cout<<"Enter value: ";cin>>value;
cout<<"Enter position: ";cin>>pos;
arr[pos]=value;
for(int i=0;i<5;i++){
cout<<arr[i]<<" ";}
}
