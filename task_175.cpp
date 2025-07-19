#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Satrni kiriting:";
    getline(cin, str);
    int n;
    cout << "Nechi marta takrorlashini kiriting:";
    cin >> n;
    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < n; j++) {
            cout << str[i];
        }
    }
    return 0;
}