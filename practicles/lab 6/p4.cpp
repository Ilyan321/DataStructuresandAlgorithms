//check balanced paranthesis
#include <iostream>
#include <stack>
using namespace std;

int main() {
    string e = "{()}[]";
    stack<char> s;
    bool f = true;
    for(char c : e) {
        if(c=='('||c=='{'||c=='[') s.push(c);
        else {
            if(s.empty() || (c==')'&&s.top()!='(') || (c=='}'&&s.top()!='{') || (c==']'&&s.top()!='[')) f=false;
            else s.pop();
        }
    }
    cout << (f && s.empty() ? "Balanced" : "Not Balanced");
}
