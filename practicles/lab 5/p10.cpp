#include <iostream>
using namespace std;

struct node {
    int value;
    struct node *ptr;
};

int main() {
    struct node *start = NULL;
    node n1, n2, n3;
    n1.value = 10; n1.ptr = &n2;
    n2.value = 20; n2.ptr = &n3;
    n3.value = 30; n3.ptr = NULL;
    start = &n1;

    node *prev = NULL;
    node *curr = start;
    node *next = NULL;

    while(curr != NULL) {
        next = curr->ptr;
        curr->ptr = prev;
        prev = curr;
        curr = next;
    }
    start = prev;

    node *temp = start;
    while(temp != NULL) {
        cout << temp->value << " ";
        temp = temp->ptr;
    }
    return 0;
}
