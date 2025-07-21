#include <iostream>
using namespace std;
int main() {
    string str,word;
    cout << "Enter string: ";
    getline(cin, str);
    cout << "Enter word: ";
    getline(cin, word);
   int n = str.find(word);
    string str1 = str.substr(n, n+word.length());
    string str2 = str.substr(n+word.length(), str.length()-1);
    string str3 = str.substr(0,n);
    for (int i = 0; i < str.length(); i++) {
        str3[i] = '+';
        str2[i] = '+';
    }
    str = str3 + str1 + str2;
    cout << str << endl;
    return 0;
}