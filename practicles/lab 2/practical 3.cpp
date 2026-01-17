//add on specific position
#include<iostream>
using namespace std;
int main(){
int index=10;
int arr[index]={10,30,40};
int size=3;
int newitem=20,pos=1;
for(int i=size;i>pos;i--){
arr[i]=arr[i-1];}
arr[pos]=newitem;
size++;
cout<<"updated array: ";
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";}


}
