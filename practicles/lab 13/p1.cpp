#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *l, *r;
    Node(int v) { data = v; l = r = NULL; }
};
Node* insert(Node* root, int v) {
    if (!root) return new Node(v);
    if (v < root->data) root->l = insert(root->l, v);
    else root->r = insert(root->r, v);
    return root;
}
int main() {
    Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    return 0;
}