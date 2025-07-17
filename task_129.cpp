#include <iostream>
using namespace std;
int main() {
    string str1;
    string str2,newstr;
    cout << "1-satrni kiriting:";
    cin >> str1;
    cout << "2-satrni kiriting:";
    cin >> str2;
    for (int i = 0; i < str1.size(); i++) {
        if (i != 0) {
           newstr += str1[i];
        }
    }
    for (int i = 0; i < str2.size(); i++) {
        if (i != 0) {
            newstr += str2[i];
        }
    }
    cout << newstr << endl;




    return 0;
}