#include <iostream>
using namespace std;
int main() {
string s;
cout << "Enter a string: ";
cin>>s;
cout << "Uppercase: ";
for (int i = 0; i < s.size(); i++)
cout << (char)toupper(s[i]);

cout << "\nLowercase: ";
for (int i = 0; i < s.size(); i++)
cout << (char)tolower(s[i]);
return 0;
}
