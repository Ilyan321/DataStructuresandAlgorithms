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
//Linked List class
class List{
	public:
	Node* head;
	Node*tail;
	List(){
		head=tail=NULL;
	}
	//push front function
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
	//push back function
	void push_back(int val){
		Node* newnode = new Node(val);
		if (head==NULL){
			head=tail=newnode;
		}else{
			tail->next=newnode;
			tail=newnode;
		}
	}
	//print linked list
	void printll(){
		Node* temp=head;
		cout<<"Linked list: ";
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}


};//Linked List class end
int main(){
	List ll;
	ll.push_back(30);
	ll.push_back(40);
	ll.push_back(50);
	ll.push_front(20);
	ll.push_front(10);
	ll.printll();
	
return 0;	
}
