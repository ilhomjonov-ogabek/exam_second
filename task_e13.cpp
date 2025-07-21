#include <iostream>
using namespace std;

int indeks(string str) {
    int num = 0;
    for (int i = 0; i < str.size(); i++) {
            if (str[i] == 'p'&& str[i + 1] == 'd'&& str[i + 2] == 'p') {
                num +=1;
                return i;
                break;
            }
    }
    if (num==0) {
        return -1;
    }
}


int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    cout << indeks(str) << endl;

    return 0;
}
