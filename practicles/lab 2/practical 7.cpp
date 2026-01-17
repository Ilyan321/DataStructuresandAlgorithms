#include<iostream>
using namespace std;
int main(){
int arr[50]={1,2,3,4,5,6,7,8,9};
int value;bool found;
cout<<"enter value: ";cin>>value;
for(int i=0;i<=50;i++){
if(arr[i]==value){
cout<<"Value found at index: "<<i<<endl;
found=true;
break;
}
}

if(!found){cout<<"NO value found.";}
}
