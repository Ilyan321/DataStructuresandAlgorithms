//delete from end
#include<iostream>
using namespace std;
int main(){
int size=6;
int arr[size]={1,2,3,4,5,6};
size--;
cout<<"Updated array: ";
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";}
}
