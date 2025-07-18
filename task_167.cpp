#include <iostream>
using namespace std;

int main() {
    string str;
    int num = 0;
    cout << "Please enter a string:";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            num += str[i] - '0';
        }
    }
    cout << num << endl;


    return 0;
}
