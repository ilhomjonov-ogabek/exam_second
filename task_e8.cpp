#include <iostream>
using namespace std;
int main() {
    string str,str1;
    cout << "1- satrni kiriting:";
    cin >> str;
    cout << "2- satrni kiriting:";
    cin >> str1;
    for (int i = 0; i < str.length(); i++) {
        if (i!=0) {
            cout << str[i];
        }
    }
    for (int i = 0; i < str1.length(); i++) {
        if (i!=0) {
            cout << str1[i];
        }
    }



    return 0;
}