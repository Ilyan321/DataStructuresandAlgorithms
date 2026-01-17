#include <iostream>
using namespace std;
int main() {
string s;
cout << "Enter a string: ";
getline(cin, s);
for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ')
            s[i] = '_';}
cout << "Modified string: " << s;
return 0;
}
