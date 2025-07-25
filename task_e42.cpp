#include <iostream>
using namespace std;

int main() {
    string str, sep;
    cout << "Satrni kiriting:";
    getline(cin, str);
    cout << "Satr-2 ni kiriting:";
    getline(cin, sep);
    int n;
    cout << "Sonni kiriting:";
    cin >> n;
    cout << str;
    n--;
    while (n != 0) {
        cout << sep << str;
        n--;
    }
    return 0;
}
