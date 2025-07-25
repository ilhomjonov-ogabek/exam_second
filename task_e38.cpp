#include <iostream>
using namespace std;

int main() {
    string str, str1;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i]
            == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u') {
            str1 += str[i];
            str1 += str[i];
        }else {
            str1 += str[i];
        }
    }
    cout << str1 << endl;


    return 0;
}
