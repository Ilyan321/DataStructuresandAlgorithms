#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int t){
        data=t;
        next=NULL;
    }



};
class Link{
    public:
    Node *head,*tail;

    Link(){
        head=tail=NULL;
    }
    void Insert(int d){

        Node *newnode=new Node(d);

        if(head==NULL){
            head=tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }

     void Insert_front(int d){

        Node *newnode=new Node(d);

        if(head==NULL){
            head=tail=newnode;
        }else{
            newnode->next=head;
            head=newnode;
        }
    }

    void Display(){
        Node *ptr;
        ptr=head;

        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }

    }

};
int main(){
Link l;
l.Insert(12);
l.Insert(13);
l.Insert(14);
l.Insert_front(8);

l.Display();

    return 0;
}