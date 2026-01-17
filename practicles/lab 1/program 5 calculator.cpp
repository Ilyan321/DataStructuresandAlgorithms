#include<iostream>
using namespace std;
class calculator{
public:

    void calc(int num1,int num2){
    cout<<"Adition: "<<num1+num2<<endl;
    cout<<"Subtraction: "<<num1-num2<<endl;
    cout<<"Multiplication: "<<num1*num2<<endl;
    cout<<"Division: "<<num1/num2<<endl;
    }
    void calc(int num1,int num2,int num3){
    cout<<"Adition: "<<num1+num2+num3<<endl;
    cout<<"Subtraction: "<<num1-num2-num3<<endl;
    cout<<"Multiplication: "<<num1*num2*num3<<endl;
    cout<<"Division: "<<num1/num2/num3<<endl;
    }
};
int main(){
calculator c1,c2;
c1.calc(2,3);cout<<endl;
c2.calc(2,3,4);
}
