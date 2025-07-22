#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    int n ;
    cout << "Enter number: ";
    cin >> n;
    while (n != 0) {
        for (int i = 0; i < n; i++) {
            cout << str[i];
        }
        n--;
    }



    return 0;
}