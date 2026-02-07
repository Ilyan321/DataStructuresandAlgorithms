#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Stack{
    public:
    Node* head;
    Node* tail;
    Stack(){
        head=tail=NULL;
    }

    //push
    void push(int val){
        Node* newnode=new Node(val);
        if (head==NULL){
            head=tail=newnode;
        }else{
           newnode->next=head;
           head=newnode;
        }
    }
   //pop 
    int pop(){
        if(head==NULL){cout<<"Stack empty.\n";return -1;}
        int val=head->data;
        if(head==tail){head=tail=NULL;}
        else{head=head->next;}
        return val;
    }    

    //print stack
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    // print top
    void top(){
        if(head==NULL){cout<<"No top element, stack is empty.\n";return;}
        cout<<"The top of stack is: "<<head->data<<endl;
    }


};
int main(){
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.pop();
    stack.top();
    stack.print();


    return 0;
}