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

class List{
  public:
  Node*head;
  Node* tail;
  
  List(){
    head=tail=NULL;
}
void push_front(int val){
    Node *newNode= new Node(val);
    if (head==NULL){
        head=tail=NULL;
        return;
        
    }
    else{
        newNode->next=head;
        head=newNode;
    }} //Pushfront end

  void printll(){
    Node* temp=head;
    cout<<"Linked list: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
  }

};
int main(){
    List ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.printll();
}