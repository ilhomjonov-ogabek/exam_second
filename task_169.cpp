#include <iostream>
using namespace std;
void str_toq(string str) {
    for (int i = 0; i < str.size(); i++) {
        if (i%2==1) {
            cout << str[i];
        }
    }
}
int main () {
    string str;
    cout << "strni kiriting:";
    getline(cin,str);
    str_toq(str);
    return 0;
}