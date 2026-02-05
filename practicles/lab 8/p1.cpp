#include <iostream>
using namespace std;

struct PNode { int data, prio; PNode* next; };

class PriorityQueue {
    PNode* head = nullptr;
public:
    void enqueue(int v, int p) {
        PNode* n = new PNode{v, p, nullptr};
        if (!head || p < head->prio) { n->next = head; head = n; }
        else {
            PNode* t = head;
            while (t->next && t->next->prio <= p) t = t->next;
            n->next = t->next; t->next = n;
        }
    }
    void dequeue() {
        if (!head) return;
        PNode* t = head; head = head->next;
        cout << "Popped: " << t->data << endl; delete t;
    }
};
int main() {
    PriorityQueue pq;
    pq.enqueue(10, 2); pq.enqueue(20, 1); 
    pq.dequeue();
    return 0;
}