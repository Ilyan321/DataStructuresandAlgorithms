//Stack using Linked List
#include <iostream>
using namespace std;

struct Node { int data; Node* next; };
Node* top = nullptr;

void push(int v) { top = new Node{v, top}; cout << v << " pushed\n"; }
void pop() { if(!top) return; Node* t = top; top = top->next; delete t; cout<<"Popped\n";}
void display() { Node* t = top; while(t) { cout << t->data << " "; t = t->next; } cout << endl; }

int main() {
    push(10); push(20);
    cout<<"Stack: "; display();
    pop();
    display();
}
