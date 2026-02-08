#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){data=val;next=NULL;}
};
class Stack{
    public:
    Node* head;
    Node* tail;
    Stack(){head=tail=NULL;}

    //push
    void push(int val){
        Node* newnode=new Node(val);
        if(head==NULL){head=tail=newnode;return;}
        newnode->next=head;
        head=newnode;
    }
    //pop
    int pop(){
        if(head==NULL){cout<<"CAnt pop stack empty.\n";return -1;}
        if(head==tail){head=tail=NULL;}else{head=head->next;}
        return head->data;
    }

    //print
    void print(){
        Node* temp=head;
        cout<<"Stack: "<<endl;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }

    void top(){
        if(head==NULL){cout<<"No Top stack empty.\n";}else{cout<<"Top is: "<<head->data;}
    }


};
int main(){
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.print();
    stack.pop();
    stack.print();
    stack.top();
}