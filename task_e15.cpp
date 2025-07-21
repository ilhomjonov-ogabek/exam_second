#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int num;
    cout << "Enter a number: ";
    cin >> num;
    string str1 = str.substr(0, num);
    string str2 = str.substr(num, str.length());
    int num1 = str2.find(str1);
    if (num1>0) {
        cout << "true";
    }else {
        cout << "false";
    }


    return 0;
}
