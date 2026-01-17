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
  Node* head;
  Node* tail;
  public:
  List(){
      head=tail=NULL;}

    void push_front(int val){//start
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }//pushfront end

    void push_back(int val){//start
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }//pushback end

    void pop_front(){
        if(head==NULL){cout<<"Empty Linked list.\n";}//check if its empty.
        Node* temp =head;
        head= head->next;
        temp->next=NULL;
        delete temp;
    }//pop_front end

    void pop_back(){
        if(head==NULL){cout<<"Empty linked list.\n";}
        Node*temp = head;
        while(temp->next!= tail){
            temp=temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail=temp;
    }//pop_back end



    void printll(){
    Node* temp = head;
    cout<<"Linked list: ";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<"Null"<<endl;

    }
};
int main() {
   List ll;
   ll.push_front(1);
   ll.push_front(2);
   ll.push_front(3);

   ll.push_back(0);

   ll.printll();

   ll.pop_front();

   ll.printll();

   ll.pop_back();
   ll.printll();

    return 0;
}
