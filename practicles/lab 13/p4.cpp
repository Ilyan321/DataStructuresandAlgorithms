#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *l, *r;
    Node(int v) { data = v; l = r = NULL; }
};
Node* delOneChild(Node* root, int v) {
    if (!root) return root;
    if (v < root->data) root->l = delOneChild(root->l, v);
    else if (v > root->data) root->r = delOneChild(root->r, v);
    else {
        Node* t = (root->l) ? root->l : root->r;
        delete root;
        return t;
    }
    return root;
}
int main() {
    Node* root = new Node(50);
    root->l = new Node(30);
    root->l->l = new Node(20);
    root = delOneChild(root, 30);
    return 0;
}