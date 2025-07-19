#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Please enter a string" ;
    getline(cin, str);
    int num = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            num += str[i] - '0';
        }
    }
    cout << num << endl;




    return 0;
}