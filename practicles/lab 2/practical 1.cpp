//develop program to perform operation we discussed on 1d array
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int data2[5];
int data [5]={10,20,30,40,50};
int largest=data[0];
for(int i=0;i<5;i++){
if(data[i]>largest){
largest=data[i];}
}
cout<<largest;
sort(data[],5);
cout<<data[2];
return 0;
}
