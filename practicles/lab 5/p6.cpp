//delete from end
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
    n2.value = 20;
    n2.ptr = NULL;
    start = &n1;

    if(start->ptr == NULL) {
        start = NULL;
    } else {
        node *temp = start;
        while(temp->ptr->ptr != NULL) {
            temp = temp->ptr;
        }
        temp->ptr = NULL;
    }

    node *temp = start;
    while(temp != NULL) {
        cout << temp->value << " ";
        temp = temp->ptr;
    }
    return 0;
}
