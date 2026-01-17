#include<iostream>
using namespace std;

struct node
{
    int value; //data stored in node
    struct node *pointer;     //pointer to nxt node
};

struct node *start=NULL;
int main()
{
    node n1,n2,n3;
    n1.value=10;
    n2.value=20;
    n3.value=30;
cout<<"1st node: "<<n1.value<<endl;
cout<<"2nd node: "<<n2.value<<endl;
cout<<"3rd node: "<<n3.value<<endl;
return 0;}
