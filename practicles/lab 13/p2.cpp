#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *l, *r;
    Node(int v) { data = v; l = r = NULL; }
};
bool search(Node* root, int v) {
    if (!root) return false;
    if (root->data == v) return true;
    return v < root->data ? search(root->l, v) : search(root->r, v);
}
int main() {
    Node* root = new Node(50);
    root->l = new Node(30);
    int key = 30;
    if (search(root, key)) cout << "Found";
    else cout << "Not Found";
    return 0;
}