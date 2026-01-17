#include<iostream>
using namespace std;
class Rect{
public:
int length,breadth,perimeter,area ;
Rect(){
	cout<<"enter length and breadth :";
	cin>>length>>breadth;

	area=length*breadth;
	perimeter=length+breadth;
}

void display(){
	cout<<"the perimeter is "<<perimeter<<endl;
	cout<<"the area  is "<<area<<endl;
}
};
int main(){
Rect r1;
r1.display();
}

