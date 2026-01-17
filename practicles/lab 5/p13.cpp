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

node *slow = start;
node *fast = start;
    while(fast != NULL && fast->ptr != NULL) {
        slow = slow->ptr;
        fast = fast->ptr->ptr;
    }
    cout << slow->value;
    return 0;
}
