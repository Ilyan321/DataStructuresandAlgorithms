#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        prev=next=NULL;
    }
};

class List{
    public:
    Node* head;
    Node* tail;
    List(){head=tail=NULL;}

    void push_front(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }


    //push back
    void push_back(int val){
        Node* newnode=new Node(val);
        if (head==NULL){
            head=tail=newnode;
        }else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
    }

    //pop front
    void pop_front(){
        if(head==NULL){cout<<"Empty list.\n";return;}
        if(head==tail){
            head=tail=NULL;
            return;
        }
        head=head->next;
        head->prev=NULL;
    }
    // pop back
    void pop_back(){
        if(head==NULL){cout<<"Empty list.\n";return;}
        if(head==tail){head=tail=NULL;}
        tail=tail->prev;
        tail->next=NULL;
    }







    void printll(){
        if(head==NULL){cout<<"direxct Empty klist.\n";}
        Node* temp=head;
        cout<<"direct Linked list: ";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;

    }

    void printbl(){
        if(head==NULL){cout<<"reverse Empty list.\n";}
        Node* temp=tail;
        cout<<"Linked list reverse: ";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
cout<<endl;
    }


};
int main(){
    List ll;
    // ll.push_front(10);
    // ll.push_front(5);
    ll.push_back(15);
    ll.pop_front();
    // ll.pop_back();
    ll.printll();
    ll.printbl();
}