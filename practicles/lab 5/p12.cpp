#include <iostream>
using namespace std;

struct node {
    int value;
    struct node *ptr;
};

int main() {
    struct node *start = NULL;
    node n1, n2;
    n1.value = 20; n1.ptr = &n2;
    n2.value = 10; n2.ptr = NULL;
    start = &n1;

    int swapped;
    node *p1;
    node *last = NULL;
do {
    swapped = 0;
    p1 = start;
        while(p1->ptr != last) {
     if(p1->value > p1->ptr->value) {
int t = p1->value;
                p1->value = p1->ptr->value;
                p1->ptr->value = t;
                swapped = 1;
            }
            p1 = p1->ptr;
        }
        last = p1;
    } while(swapped);

    node *temp = start;
    while(temp != NULL) {
        cout << temp->value << " ";
        temp = temp->ptr;
    }
    return 0;
}
