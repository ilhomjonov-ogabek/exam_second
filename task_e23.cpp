#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string str1 = "bread";
    int n = str.find(str1);
    string str2,str3 = str.substr(n+str1.size(),str.size());
    str2 = str.substr(n+str1.size(),str3.find(str1) );
    cout << str2 << endl;




    return 0;
}