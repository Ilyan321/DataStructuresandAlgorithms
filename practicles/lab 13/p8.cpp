#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *l, *r;
    Node(int v) { data = v; l = r = NULL; }
};
int findMin(Node* r) { return !r->l ? r->data : findMin(r->l); }
int findMax(Node* r) { return !r->r ? r->data : findMax(r->r); }
int main() {
    Node* root = new Node(50);
    root->l = new Node(20); root->r = new Node(80);
    cout << "Min: " << findMin(root) << " Max: " << findMax(root);
    return 0;
}