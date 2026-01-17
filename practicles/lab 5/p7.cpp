//dlete at specific
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

    int pos =1;

    node *temp=start;
    for(int i=0;i<pos-1;i++){
    temp=temp->ptr;}
    temp->ptr =temp->ptr->ptr;

    node *print = start;
    while(print != NULL) {
        cout << print->value << " ";
        print = print->ptr;
    }
    return 0;
}
