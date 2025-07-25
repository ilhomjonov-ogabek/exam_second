#include <iostream>
using namespace std;

string password(string str) {
    bool passNumber = false;
    bool passUpper = false;
    bool passLower = false;
    bool passP = false;
    if (str.length() >= 8) {
        for (int i = 0; i < str.length(); i++) {
            if (isupper(str[i])) {
                passUpper = true;
            }
            if (islower(str[i])) {
                passLower = true;
            }
            if (isdigit(str[i])) {
                passNumber = true;
            }
            if (str[i] == '#'||str[i] == '*') {
                passP = true;
            }

        }
    }else {
        return "false";
    }
    if (passNumber == true&&passUpper == true&&passLower == true&&passP == true) {
        return "true";
    }else {
        return "false";
    }

}

int main() {
    string pass;
    cout << "Enter password: ";
    getline(cin, pass);

    string result = password(pass);
    cout << "Is password valid? " << result << endl;

    return 0;
}

