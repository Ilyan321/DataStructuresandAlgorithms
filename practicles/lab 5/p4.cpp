#include <iostream>
using namespace std;

struct node {
    int value;
    struct node *ptr;
};

int main() {
    struct node *start = NULL;
    node n1, n2;
    n1.value = 10;
    n1.ptr = &n2;
    n2.value = 30;
    n2.ptr = NULL;
    start = &n1;

    int pos = 2;

    node new_node;
    new_node.value = 20;

    node *temp = start;
    for(int i = 0; i < pos - 2; i++) {
        temp = temp->ptr;
    }

    new_node.ptr = temp->ptr;
    temp->ptr = &new_node;

    node *display = start;
    while(display != NULL) {
        cout << display->value << " ";
        display = display->ptr;
    }
    return 0;
}
