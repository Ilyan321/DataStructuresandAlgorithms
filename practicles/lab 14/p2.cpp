#include <iostream>
using namespace std;
struct Node { int val; Node* next; Node(int v){val=v; next=NULL;} };
int main() {
    int v = 4;
    Node* adj[4] = {NULL};
    int src=0, dest=1;
    Node* n = new Node(dest);
    n->next = adj[src];
    adj[src] = n;
    cout << "Node " << src << " connected to " << adj[src]->val;
    return 0;
}