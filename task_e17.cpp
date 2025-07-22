#include <iostream>
using namespace std;
int main() {
    string str,str1;
    cout << "Satrni kiriting:";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (str[0]=='y'&& str[str.length()-1]=='y') {
            str[0] = 'x';
            str[str.size()-1] = 'x';
        }else if (str[0]=='y') {
            str[0] = 'x';
        }else if (str[str.length()-1]=='y') {
            str[str.length()-1] = 'x';
        }
        if (str[i]!='y') {
            str1 += str[i];
        }
    }
    cout << str1 << endl;




    return 0;
}