#include <iostream>
using namespace std;
int main() {
    string str;
    cout<<"Enter string: ";
    getline(cin, str);
    int num = 0;
    for(int i=0;i<str.size();i++) {
        if (str[i]=='x'&&str[i+1]=='y'&&str[i+2]=='z'&&str[i-1]!='.') {
          num +=1;
        }
        }
    if(num>0) {
        cout << "true";
    }else {
        cout << "false";
    }



    return 0;
}