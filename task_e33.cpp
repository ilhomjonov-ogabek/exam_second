#include <iostream>
using namespace std;
void changeWord(string str) {
    char ch = str[0];
    str[0] = str[str.size()-1];
    str [ str.length()-1 ] = ch;
    cout << str;
}
int main() {
    string s;
    cout<<"Enter string:";
    cin>>s;
    changeWord(s);
    return 0;
}