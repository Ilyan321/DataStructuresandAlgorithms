//insert at end
#include <iostream>
using namespace std;

struct node {
    int value;
    struct node *ptr;
};

int main() {
    struct node *start = NULL;
    node n1;
    n1.value = 10;
    n1.ptr = NULL;
    start = &n1;

    node n_new;
    n_new.value = 20;
    n_new.ptr = NULL;

    if (start == NULL) {
        start = &n_new;
    } else {
        node *temp = start;
        while (temp->ptr != NULL) {
            temp = temp->ptr;
        }
        temp->ptr = &n_new;
    }

    node *temp = start;
    while(temp != NULL) {
        cout << temp->value << " ";
        temp = temp->ptr;
    }
    return 0;
}
