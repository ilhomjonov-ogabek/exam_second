#include <iostream>
using namespace std;
int main() {
    string str,number;
    int num = 0;
    cout << "Enter string: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        while (isdigit(str[i])) {
            number += str[i];
            cout << number;
            break;

            }
        }
    num += stoi(number);
    cout << num << endl;






    return 0;
}