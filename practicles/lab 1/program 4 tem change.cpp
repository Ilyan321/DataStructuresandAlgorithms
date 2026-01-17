#include<iostream>
using namespace std;
class temprature{
	public:
		float c,f;
int c_to_f( ){cout<<"write the temprature in celsius :";
	cin>>c;
	f=(1,9*c)+32;
	cout<<" fahrnhite : "<<f<<endl;}
int f_to_c( ){cout<<"write the temprature in fahrenhite :";
	cin>>f;
	c=(f-32)*0.55;
	cout<<" celsius : "<<c<<endl;}};
int main (){
	temprature c1;
	c1.c_to_f();
	c1.f_to_c();
	return 0;}

