#include<iostream>
using namespace std;
class Node{public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){data=val;next=prev=NULL;}
};

class deque{
    public:
    Node* front;
    Node* rear;
    deque(){front=rear=NULL;}

    //push_front
    void push_front(int val){
        Node* newnode= new Node(val);
        if(front==NULL){front=rear=newnode;}else{
            newnode->next=front;
            front->prev=newnode;
            front=newnode;
        }

    }
    //push back
    void push_back(int val){
        Node* newnode=new Node(val);
        if(front==NULL){
            front=rear=newnode;
        }else{
            rear->next=newnode;
            newnode->prev=rear;
            rear=newnode;
        }
    }
    //pop front
    void pop_front(){
        if(front==NULL){cout<<"No pop front deque empty.\n";return;}
        if(front==rear){front=rear=NULL;}
            front=front->next;
            front->prev=NULL;
        
    }
    //pop back
    void pop_back(){
        if(front==NULL){cout<<"No pop back deque empty.\n";return;}
        if(front==rear){front=rear=NULL;return;}
            rear=rear->prev;
            rear->next=NULL;

        }


    //peek front
    void peek_front(){
        cout<<"front element is: "<<front->data<<endl;
    }
    //peek rear
    void peek_rear(){
        cout<<"The Rear element is: "<<rear->data<<endl;
    }

    //print
    void print(){
        Node* temp=front;
        cout<<"Doubly Queue: ";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;
    }

};
int main(){
    deque deque;
    deque.push_front(10);
    deque.push_front(20);
    deque.push_back(30);
    deque.print();
    // deque.pop_front();
    // deque.print();
    // deque.pop_back();
    deque.peek_front();
    deque.peek_rear();
//     deque.print();
}