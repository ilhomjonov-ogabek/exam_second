#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    if (str[0] == 'r' && str[1] == 'e' && str[2] == 'd') {
        cout << "red";
    } else if (str[0] == 'b' && str[1] == 'l' && str[2] == 'u' && str[3] == 'e') {
        cout << "blue";
    }
    return 0;
}
