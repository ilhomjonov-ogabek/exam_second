#include <iostream>
using namespace std;

string sameEnds(string str) {
    int n = str.length();
    string result = "";

    for (int len = n / 2; len > 0; len--) {
        string prefix = str.substr(0, len);
        string suffix = str.substr(n - len, len);

        if (prefix == suffix) {
            result = prefix;
            break;
        }
    }

    return result;
}

int main() {
    string str;
    cout << "Enter a string" ;
    getline(cin, str);
    cout << sameEnds(str) << endl;

    return 0;
}
