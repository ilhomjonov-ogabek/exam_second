#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string str1;
    cout << "Please enter a string: ";
    cin >> str1;
    int n;
    cout << "N sonini kiriting:";
    cin >> n;
    while (n!=0) {
        for (int i = 0; i < n; i++) {
            cout << str1[i];
        }
        n--;
    }
    return 0;
}
