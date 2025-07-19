#include <iostream>
using namespace std;

int main() {
    string str, str1;
    cout << "Enter string: ";
    cin >> str;

    for (int i = 0; i < str.length(); ) {
        if (i + 2 < str.length() && str[i] == 'z' && str[i + 2] == 'p') {
            str1 += str[i];
            str1 += str[i + 2];
            i += 3;
        } else {
            str1 += str[i];
            i++;
        }
    }

    cout << str1 << endl;
    return 0;
}
