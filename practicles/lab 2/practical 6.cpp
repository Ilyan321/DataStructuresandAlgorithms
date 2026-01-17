//delete on specific position
#include<iostream>
using namespace std;
int main(){
int arr[    ]={10,30,40,50,60,70,80,90};
int size=8;
int pos=5;
for(int i=pos;i<size;i++){
arr[i]=arr[i+1];}
size--;
cout<<"updated array: ";
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";}


}
