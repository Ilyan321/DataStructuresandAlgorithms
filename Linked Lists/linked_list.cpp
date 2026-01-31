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
		if(head==NULL){
			head=tail=newnode;
			return;
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

	//pop front
	void pop_front(){
		if(head==NULL){
			cout<<"Linked list empty."<<endl;
			return;
		}
		Node* temp =head;
		head=head->next;
		if (head==NULL){
			tail=NULL;
		}delete temp;
	}
	//pop back
	void pop_back(){
		if (head==NULL){
			cout<<"Empty list.\n";
			return;
		}
		if (head==tail){
			delete head;
			head=tail=NULL;
			return;
		}
		Node* temp= head;
		while (temp->next!=tail){
			temp=temp->next;
		}
		delete tail;
		tail=temp;
		tail->next=NULL;
	}


};

int main(){
	List ll;
	ll.push_back(10);
	ll.push_front(100);
	ll.pop_back();
	ll.printll();
}