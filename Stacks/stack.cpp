#include<iostream>
#include<vector>
using namespace std;

class Stack{
    public:
    vector<int> stack;

    void push(int val){
        stack.push_back(val);
    }

    void pop(){
        if(!stack.empty()){stack.pop_back();}
        else{cout<<"Stack empty.\n";}
    }

    int top(){
        return stack[stack.size()-1];
    }
    bool empty(){return stack.empty();}
};
int main(){
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    while(!stack.empty()){
        cout<<stack.top()<<" ";
        stack.pop();
    }
}