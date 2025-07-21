#include <iostream>
using namespace std;

int main() {
    string str;
    string str1 = "";
    int num = 0;

    cout << "Satrni kiriting: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            str1 += str[i];
        } else {
            if (!str1.empty()) {
                num += stoi(str1);
                str1 = "";
            }
        }
    }
    if (!str1.empty()) {
        num += stoi(str1);
    }

    cout << "Butun sonlar yig'indisi: " << num << endl;

    return 0;
}
