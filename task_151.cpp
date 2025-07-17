#include <iostream>
using namespace std;
int main() {
    string str1,str2;
    cout << "1-satrni kiriting:";
    cin >> str1;
    cout << "2-satrni kiriting:";
    cin >> str2;
    for (int i = 1; i <= str2.size(); i++) {
        if (str1[str1.size()-1] == str2[0]) {
            str1 += str2[i];
        }else {
            str1 += str2[i];
        }
    }
    cout << str1 << endl;




    return 0;
}