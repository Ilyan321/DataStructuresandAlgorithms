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
int count =0;

    node *temp = start;
    while(temp != NULL) {
        count++;
        temp = temp->ptr;
    }cout<<"Total nodes: "<<count;
    return 0;
}
