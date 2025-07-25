#include <iostream>
using namespace std;
string pdp(string str) {
    if (str[str.size()-3] == 'P'&&str[str.size()-2] == 'D'&&str[str.size()-1] == 'P') {
        return "Ishonamz";
    }else {
        return "Bizga qo'shiling!";
    }
}
int main() {
    string s;
    cout<<"Enter string:";
    cin>>s;
    cout<<pdp(s);
    return 0;
}