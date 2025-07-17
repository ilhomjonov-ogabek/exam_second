#include <iostream>
using namespace std;
string str(string str1,string str2) {
    int n1 = stoi(str1);
    int n2 = stoi(str2);
    int result = n1*n2;
    string str3 = to_string(result);
    return str3;
}
int main() {
    string str1, str2;
    cout << "1- satrni kkiriting:";
    cin >> str1;
    cout << "2- satrni kkiriting:";
    cin >> str2;
    cout << str(str1,str2) << endl;
    return 0;
}