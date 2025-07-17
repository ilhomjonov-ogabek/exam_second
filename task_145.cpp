#include <iostream>
using namespace std;
void polidron(string str) {
    bool flag = true;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == str[str.size()-1-i]) {
          flag = true;
        }else {
            flag = false;
        }
    }
    if (flag == true) {
        cout << "Ha bu palidron so'z";
    }else {
        cout << "Yo'q palidron so'z emas";
    }
}
int main () {
    string str;
    cout << "Please enter a string: ";
    cin >> str;
    polidron(str);

    return 0;
}