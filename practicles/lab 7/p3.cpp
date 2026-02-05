//evaluate postfix experrations
#include <iostream>
#include <stack>
using namespace std;

int main() {
    string exp = "231*+9-";
    stack<int> s;
    for (char c : exp) {
        if (isdigit(c)) s.push(c - '0');
        else {
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();
            if(c=='+') s.push(b+a); else if(c=='-') s.push(b-a);
            else if(c=='*') s.push(b*a); else if(c=='/') s.push(b/a);
        }
    }
    cout << "Result: " << s.top();
}
