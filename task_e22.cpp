#include <iostream>
using namespace std;
void middleThree(string str) {
    cout << str[str.size()/2-1]<<str[str.size()/2]<<str[str.size()/2+1]<<endl;
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    middleThree(str);
    return 0;
}