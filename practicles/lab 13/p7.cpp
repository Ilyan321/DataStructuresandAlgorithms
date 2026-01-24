#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *l, *r;
    Node(int v) { data = v; l = r = NULL; }
};
int count(Node* r) { return !r ? 0 : 1 + count(r->l) + count(r->r); }
int height(Node* r) { return !r ? -1 : 1 + max(height(r->l), height(r->r)); }
int main() {
    Node* root = new Node(50);
    root->l = new Node(30);
    cout << "Nodes: " << count(root) << " Height: " << height(root);
    return 0;
}