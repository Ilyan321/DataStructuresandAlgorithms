#include <iostream>
using namespace std;
int main() {
string s, rev = "";
cout << "Enter a string: ";
cin>>s;
for (int i = s.length() - 1; i >= 0; i--)
rev += s[i];
cout << "Reversed string: " << rev;
return 0;
}
