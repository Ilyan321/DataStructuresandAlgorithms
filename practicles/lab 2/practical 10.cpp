//addition of 2 arrays
#include<iostream>
using namespace std;
int main(){
const int size=4;
int arr1[size]={1,2,3,4};
int arr2[size]={5,6,7,8};
int sum[size];
for(int i=0;i<size;i++){
sum[i]=arr1[i]+arr2[i];}
cout<<"sum array: ";
for(int i=0;i<size;i++){
cout<<sum[i]<<" ";
}
}
