#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string str;
    int num = 0;
    cout << "Satrni kiriting:";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            int n = str[i]-'0';
            num += n * n;
        }
    }
    cout << num << endl;


    return 0;
}
