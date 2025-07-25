#include <iostream>
using namespace std;
int main() {
    string str,str1;
    cout << "Satrni kiriting:";
    getline(cin, str);
    str1 = str.substr(2,str.length()-6);
    cout << str1 << endl;
    return 0;
}