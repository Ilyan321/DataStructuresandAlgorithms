#include <iostream>
#include<cstring>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin>>str1;
    cout << "Enter second string: ";
    cin>>str2;

    if (str1 == str2){ cout << "Both strings are equal.";}
    if (str1 < str2) {cout << "First string is greater.";}
    else {cout << "Second string is greater.";}

    return 0;
}
