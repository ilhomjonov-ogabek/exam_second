#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter string:";
    cin >> str;
    string str1 = "PDPAcademy";
    string newstr;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'P'&&str[i+1] == 'D'&&str[i+2] == 'P') {
            str.replace(i,i+2,str1);

        }
    }
    cout << str << endl;





    return 0;
}