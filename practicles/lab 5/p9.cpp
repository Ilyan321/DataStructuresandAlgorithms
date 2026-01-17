//find node
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
int searchVal = 20;
int found = 0;
node *temp = start;
while(temp != NULL) {
    if(temp->value == searchVal) {
        found = 1;
        break;}
        temp = temp->ptr;
    }

    if(found == 1) cout << "Found";
    else cout << "Not Found";
    return 0;
}
