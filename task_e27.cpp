#include <iostream>
using namespace std;
int main() {
    string a,b;
    cout << "1-satrni kiriting:";
    cin >> a;
    cout << "2-satrni kiriting:";
    cin >> b;
    if (a.size()>b.size()) {
        cout <<b<<a<<b;
    }else {
        cout <<a<<b<<a;
    }



    return 0;
}