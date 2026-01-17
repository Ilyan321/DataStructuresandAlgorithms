#include <iostream>
using namespace std;

struct node {
    int value;
    struct node *ptr;
};

int main() {
    struct node *start = NULL;
    node n1, n2;
    n1.value = 10; n1.ptr = &n2;
    n2.value = 20; n2.ptr = NULL;
    start = &n1;

    node new_node;
    new_node.value = 5;
    new_node.ptr = start;
    start = &new_node;

    node *temp = start;
    while(temp != NULL) {
        cout << temp->value << " ";
        temp = temp->ptr;
    }
    return 0;
}
