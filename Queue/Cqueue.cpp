#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){data=val;next=NULL;}
};
class Cqueue{
    public:
    Node* tail;
    Cqueue(){tail=NULL;}

    //push
    void push(int val){
        Node* newnode=new Node(val);
        if(tail==NULL){tail=newnode;tail->next=tail;}
        else{
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
    }
    //pop
    void pop(){
        if(tail==NULL){cout<<"Cqueue empty.\n";return;}
        Node* head=tail->next;
        if(head==tail){delete head;tail=NULL;}
        else{
            tail->next=head->next;
            delete head;
        }
    }

    //print
    void print(){
        Node* temp=tail->next;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=tail->next);
        cout<<endl;
    }

};
int main(){
    Cqueue queue;
    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.print();
    queue.pop();
    queue.print();
}