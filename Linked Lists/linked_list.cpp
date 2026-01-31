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




// class List{
// 	public:
// 	Node* head;
// 	Node* tail;
// 	List(){head=tail=NULL;}

//     void push_front(int val){
//         Node* newnode= new Node(val);
//         if(head==NULL){
//             head=tail=newnode;
//             return;
//         }
//     }
// };
class List{
	public:
	Node* head;
	Node*tail;
	List(){
		head=tail=NULL;
	}
	void push_front(int val){
		Node* newnode=new Node(val);
		if(head==NULL){
			head=tail=newnode;
			return;
		}
	}
};
	
int main(){
	List ll;
	ll.push_front(10);
	ll.push_front(20);
	ll.push_front(30);
	cout<<"Linked List created successfully"<<endl;
	
return 0;	
}
