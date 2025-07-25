#include <iostream>
using namespace std;

int main() {
    string str1;
    cout << "Satrni kiriting:";
    getline(cin, str1);
    int n;
    cout << "Sonni kiriting:";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << str1.substr(str1.size() - n, str1.size() - 1);
    }


    return 0;
}
