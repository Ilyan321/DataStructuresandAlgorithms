#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *l, *r;
    Node(int v) { data = v; l = r = NULL; }
};
void inorder(Node* r) { if(r){ inorder(r->l); cout<<r->data<<" "; inorder(r->r); } }
void preorder(Node* r) { if(r){ cout<<r->data<<" "; preorder(r->l); preorder(r->r); } }
void postorder(Node* r) { if(r){ postorder(r->l); postorder(r->r); cout<<r->data<<" "; } }
int main() {
    Node* root = new Node(50);
    root->l = new Node(30); root->r = new Node(70);
    cout<<"Inorder: "; inorder(root);
    return 0;
}