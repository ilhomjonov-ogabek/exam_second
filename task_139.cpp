#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string str;
    cout << "Toq uzunlikda satr kiriting:";
    cin >> str;
    string str1;
    str1 = str.substr(str.size()/2-1, str.size()/2);
    if (str.size()%2 == 0) {
        cout << "Xatolik toq uzunlikda kiriting:";
    }else {
        cout<< str1 << endl;
    }
    return 0;
}
