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

class List{
    public:
    Node* head;
    Node* tail;
    List(){head=tail=NULL;}

    //push_front
    void push_front(int val){
        Node* newnode=new Node(val);
        if (head==NULL){
            head=tail=newnode;
            return;
        }else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }

    //push_back
    void push_back(int val){
        Node* newnode=new Node(val);
        if(head==NULL){head=tail=newnode;return;}
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;

        }
    }


    //pop front
    void pop_front(){
        if(head==NULL){
            cout<<"Cant delete front, List empty.\n";return;}
        if(head==tail){head=tail=NULL;return;}
        head=head->next;head->prev=NULL;
    }

    //pop back
    void pop_back(){
        if(head==NULL){cout<<"Cant delete back, empty list\n";return;}
        if(head==tail){head=tail=NULL;return;}
        tail=tail->prev;
        tail->next=NULL;
    }

    //search node
    void search(){
        int value;bool found=false;
        Node* temp=head;int counter =1;
        cout<<"Enter the value of node to search: ";cin>>value;
        while(temp!=NULL){
            if(temp->data==value){cout<<"Node "<<value<<" found at location "<<counter<<endl;found=true;break;}
            counter++;
            temp=temp->next;
        }
        if(!found){cout<<"404 Error, Node not found.\n";}
    }


    //print direct list
    void printll(){
        Node* temp=head;
        cout<<"Linked list: ";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;
    }

    //reverse print
    void reverse(){
        Node* temp=tail;
        cout<<"Reversed list: ";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }cout<<endl;
    }

};
int main(){
    List ll;
    ll.push_front(5);
    ll.push_back(10);
    ll.push_back(30);
    ll.printll();
    ll.search();
    // ll.pop_front();
    // ll.pop_back();
    ll.printll();
    ll.reverse();
}