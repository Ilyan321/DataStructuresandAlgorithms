//Stack overflow and underflow check
#include <iostream>
using namespace std;
int s[3], top = -1;

void push(int x) {
    if(top >= 2) cout << "Overflow\n";
    else s[++top] = x;
}
void pop() {
    if(top < 0) cout << "Underflow\n";
    else top--;
}

int main() {
    pop(); // Underflow
    push(1); push(2); push(3);
    push(4); // Overflow
}
