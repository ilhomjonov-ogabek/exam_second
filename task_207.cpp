#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter string:";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'x' && str[i + 1] == 'y' && str[i + 2] == 'z') {
            if (str.size() - 1 - (i + 2) == i || str.size() - 1 - (i + 2) - i == 1 || str.size() - 1 - (i + 2) - i == -
                1) {
                cout << "true";
            } else {
                cout << "false";
            }
        }
    }



    return 0;
}
