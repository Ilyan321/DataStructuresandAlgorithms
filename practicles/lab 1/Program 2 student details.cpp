#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		int roll_num;
		int marks[3];
		int tmarks;
		float percentage;

	void input(){
		cout<<"Enter the name :";
		cin>>name;
		cout<<"enter the roll number :";
		cin>>roll_num;
		cout<<"enter the marks in subject 1 :";
		cin>>marks[0];
		cout<<"enter the marks in subject 2 :";
		cin>>marks[1];
		cout<<"enter the marks in subject 3 :";
		cin>>marks[2];
	}
	int totalMarks(){
		return tmarks=marks[0]+marks[1]+marks[2];
	}
	float persentage(){
	 return percentage={(marks[0]+marks[1]+marks[2])/3};
	}
	void display(){
		cout<<" The name is "<<name<<" and roll number is "<<roll_num<<endl;
		cout<<" marks is subject 1: "<<marks[0]<<endl;
		cout<<" marks is subject 2: "<<marks[1]<<endl;
		cout<<" marks is subject 3: "<<marks[2]<<endl;
		cout<<" totall marks = "<<totalMarks()<<endl;
		cout<<" percentage "<<persentage()<<endl;
	}
};
int main(){
	Student s1;
	s1.input();
	s1.display();

	return 0;
}
