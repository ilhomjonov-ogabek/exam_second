#include <iostream>
using namespace std;

int num(string str) {
    int num = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            num += 1;
        }
    }
    return num;
}

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    cout << "Satrdagi a harflar soni: " << num(str) << "ta";
    return 0;
}
