#include <iostream>
using namespace std;
int main() {
    string str,newstr;
    cout << "Satrni kiriting:";
    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'A'||str[i]=='a'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'||str[i]=='E'||str[i]=='e') {
          newstr = newstr + str[i]+str[i];
        }else {
            newstr = newstr + str[i];
        }
    }
    cout << newstr << endl;

    return 0;
}