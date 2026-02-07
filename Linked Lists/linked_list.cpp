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

	//push front
	void push_front(int val){
		Node* newnode=new Node(val);
		if(head==NULL){
			head=tail=newnode;
			return;
		}else{
			newnode->next=head;
			head=newnode;
		}
	}

	//push back
	void push_back (int val){
		Node* newnode=new Node(val);
		if (head==NULL){
			head=tail=newnode;
			return;
		}else{
			tail->next=newnode;
			tail=newnode;
		}
	}

	//pop front
	void pop_front(){
		if(head==NULL){
			cout<<"Linked list empty.\n";
			return;
		}head=head->next;	
	}

	//pop back
	void pop_back(){
		if(head==NULL){cout<<"Empty list\n";}
		if(head==tail){
			delete head;
			head=tail=NULL;
			return;}
		Node* temp=head;
		while(temp->next!=tail){
			temp=temp->next;
		}
		delete tail;
		tail=temp;
		tail->next=NULL;
	}

	//counter
	void counter(){int counter=0;
		Node* temp=head;
		while(temp!=NULL){
			temp=temp->next;
			counter++;
		}cout<<"Total Nodes: "<<counter<<endl;
	}

	//search node
	void search(){int node;int counter=1;bool found=false;
		cout<<"Enter node data to find: ";cin>>node;
		Node* temp=head;
		while(temp!=NULL){
			if(temp->data==node){
				cout<<"Node "<<node<<" found at Location "<<counter<<endl;
				found=true;
				break;
			}counter++;
			temp=temp->next;
		}
		if(!found){
			cout<<"Node not found\n";
		}
	}






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
	ll.push_front(5);
	ll.push_back(15);
	ll.counter();
	ll.search();
	ll.pop_front();
	ll.pop_back();
	ll.printll();
}