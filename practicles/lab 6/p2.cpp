//Infix to Postfix
#include <iostream>
#include <stack>
using namespace std;

int p(char c) { return c=='^'?3 : (c=='*'||c=='/')?2 : (c=='+'||c=='-')?1 : -1; }

int main() {
    string s = "a+b*(c^d-e)", res = "";
    cout<<s<<endl;
    stack<char> st;
    for(char c : s) {
        if(isalnum(c)) res += c;
        else if(c == '(') st.push(c);
        else if(c == ')') { while(st.top()!='(') { res+=st.top(); st.pop(); } st.pop(); }
        else { while(!st.empty() && p(c) <= p(st.top())) { res+=st.top(); st.pop(); } st.push(c); }
    }
    while(!st.empty()) { res += st.top(); st.pop(); }
    cout << res;
}
