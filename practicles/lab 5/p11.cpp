//merge 2 linked lists
#include <iostream>
using namespace std;

struct node {
    int value;
    struct node *ptr;
};

int main() {
    struct node *start1 = NULL;
    node n1;
    n1.value = 10; n1.ptr = NULL;
    start1 = &n1;

    struct node *start2 = NULL;
    node n2;
    n2.value = 20; n2.ptr = NULL;
    start2 = &n2;

    if(start1 == NULL) {
        start1 = start2;
    } else {
        node *temp = start1;
        while(temp->ptr != NULL) {
            temp = temp->ptr;}
        temp->ptr = start2;}

    node *temp = start1;
    while(temp != NULL) {
cout << temp->value << " ";
temp = temp->ptr;}
    return 0;
}
