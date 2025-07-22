#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter string:";
    cin >> str;
    string str1;
    cout << "Enter second string:";
    cin >> str1;
    string result = str+str1+str1+str;
    cout << result << endl;
    return 0;
}