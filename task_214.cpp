#include <iostream>
using namespace std;
int main() {
    string str,str1;
    cout << "Enter string: ";
    getline(cin, str);
    cout << "Enter string: ";
    getline(cin, str1);
    int i = str.find(str1);
        str.erase(i, str1.length());
        cout << str << endl;
    
    return 0;
}