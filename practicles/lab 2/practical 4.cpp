//delete from beginning
#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7};
int size=7;
for(int i=0;i<size;i++){
arr[i]=arr[i+1];}
size--;
cout<<"Updated array: ";
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";}
}
