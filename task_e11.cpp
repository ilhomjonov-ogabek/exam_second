#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "satrni kiriting:";
    bool a = true;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (str[i]=='g') {
            if (str[i]=='g'&&(str[i+1]=='g'||str[i-1]=='g')) {
                a = true;
            }else {
                a =false;
                break;
            }
        }
    }
    cout << a << endl;




    return 0;
}