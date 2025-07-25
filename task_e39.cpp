#include <iostream>
using namespace std;

string str(string str1) {
    string str2;
    for (int i = 0; i < str1.length(); i++) {
        if (i != 0 && i != str1.length() - 1) {
            cout << str1[i];
        }
    }
    return str1;
}

int main() {
    string str1;
    cout << "Enter string: ";
    getline(cin, str1);
    str(str1);

    return 0;
}