#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Satrni kiriting:";
    cin >> str;
    if (str.size()%2 == 0) {
        str.erase(str.size()/2-1, 2);
    }else {
        str.erase(str.size()/2, 1);
    }
    cout << str << endl;



    return 0;
}