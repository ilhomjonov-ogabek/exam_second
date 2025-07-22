#include <iostream>
using namespace std;

void str1(string str) {
    for (int i = str.length()-1; i >= 0; i--) {
        cout << str[i];
    }
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    str1(str);

    return 0;
}