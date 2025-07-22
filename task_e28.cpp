#include <iostream>
using namespace std;
int main() {
    string a,b;
    cout << "1-satrni uzunligi 4dan oshmagan xolda kiriting:";
    cin >> a;
    cout << "2-satrni kiriting:";
    cin >> b;
    cout << a.substr(0,2)+b+a.substr(2,a.size());
    return 0;
}