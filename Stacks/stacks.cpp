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
        if(!stack.empty()){
            stack.pop_back();
        }
        else{
            cout<<"Stack empty."<<endl;} }

    int top(){
        return stack[stack.size()-1];
    }
    bool empty(){
        return stack.empty();
    }
    };

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}