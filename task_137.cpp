#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Satrni kiriting:";
    getline(cin, str);
    string str1;
    cout << "2- satrni kiriting:";
    getline(cin, str1);
    str.erase(str.find(str1), str1.size());
    cout << str << endl;

    return 0;
}