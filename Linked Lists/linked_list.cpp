#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	Node(int val){
		data=val;
		next=NULL;}};
		
class List{
	public:
	Node* head;
	Node* tail;
	List(){head=tail=NULL;}

    void push_front(int val){
        Node* newnode= new Node(val);
        if(head==NULL){
            head=tail=newnode;
            return;
        }
    }





};
	
int main(){
	
	cout<<"Linked List created successfully"<<endl;
	
return 0;	
}
