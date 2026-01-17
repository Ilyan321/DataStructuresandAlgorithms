#include<iostream>
#include<cstring>
using namespace std;
int main(){
string str1;
int start,length;
cout<<"Enter string: ";
cin>>str1;
cout<<"Index: ";
cin>>start;
cout<<"Length: ";
cin>>length;
cout<<"Substring: "<<str1.substr(start,length);
return 0;
}
