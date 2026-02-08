#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){data=val;next=NULL;}
};
class Queue{
    public:
    Node* front;
    Node* rear;
    Queue(){front=rear=NULL;}

    //push at front
    void push(int val){
        Node* newnode=new Node(val);
        if(front==NULL){front=rear=newnode;}else{rear->next=newnode;rear=newnode;}
    }

    //pop at front
    void pop(){
        if(front==NULL){cout<<"No pop queue empty.\n";return;}
        Node* temp=front;
        front=front->next;
        if(front==NULL){rear=NULL;}
        delete temp;
    }
    //print
    void Print(){
        Node* temp=front;
        cout<<"Queue: ";
        while(temp!=NULL){cout<<temp->data<<" ";temp=temp->next;}
        cout<<endl;
    }
//peek
void peek(){
    cout<<"front element is: "<<front->data<<endl;
}};
int main(){
    Queue queue;
    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.Print();
    queue.pop();
    queue.Print();
    queue.peek();
}