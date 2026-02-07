#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=prev=NULL;
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
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
    }
    // pop
    int pop(){
        if(head==NULL){
            cout<<"Stack empty.\n";return -1;
        }
        int val=tail->data;
        if(head==tail){delete tail;
            head=tail=NULL;
            
        }else{
        tail=tail->prev;
        delete tail->next;
        tail->next=NULL;}
        return val;
    }
        
        

    //print stack
    void print(){
        Node* temp=tail;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
    }
    // print top
    void top(){
        if(head==NULL){cout<<"No top element, stack is empty.\n";return;}
        cout<<"The top of stack is: "<<tail->data<<endl;
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
}