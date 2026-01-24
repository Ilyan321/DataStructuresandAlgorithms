#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *l, *r;
    Node(int v) { data = v; l = r = NULL; }
};
Node* delLeaf(Node* root, int v) {
    if (!root) return root;
    if (v < root->data) root->l = delLeaf(root->l, v);
    else if (v > root->data) root->r = delLeaf(root->r, v);
    else {
        delete root;
        return NULL;
    }
    return root;
}
int main() {
    Node* root = new Node(50);
    root->l = new Node(30);
    root = delLeaf(root, 30);
    return 0;
}