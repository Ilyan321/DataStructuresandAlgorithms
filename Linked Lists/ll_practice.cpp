#include <iostream>
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
class List{
    public: 
    Node* head;
    Node* tail;
    List(){
        head=tail=NULL;
    }
    //push_front
    void push_front(int val){
        Node* newnode=new Node(val);
        if (head==NULL){
            head=tail=newnode;
            return;
        }else{
            newnode->next=head;
            head=newnode;
        }
    }
    //push back
    void push_back(int val){
        Node* newnode=new Node(val);
        if (head==NULL){
            head=tail=NULL;
            return;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    // pop front
    void pop_front(){
        if (head==NULL){
            cout<<"Empty list."<<endl;
        }head=head->next;
    }

    // pop back
    void pop_back(){
        if (head==NULL){
            cout<<"Empty list."<<endl;
            return;
        }
        if (head==tail){
            delete head;
            tail=head=NULL;
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        tail->next=NULL;
    }


    //print
    void printll(){
        Node* temp=head;
        if(head==NULL){
            cout<<"Empty list"<<endl;
            return;
        }
        cout<<"linked list: ";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    List ll;
    ll.push_front(10);
    ll.push_back(20);
    ll.pop_front();
    ll.pop_back();
    ll.printll();
}