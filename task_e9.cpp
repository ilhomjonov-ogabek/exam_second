#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Satrni kiriting:";
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
    cout << str << endl;



    return 0;
}