#include <iostream>
using namespace std;
int ekub(int a,int b) {
    while (b!=0) {
        int t = b;
        b = a%b;
        a = t;
    }
    return a;
}
int main() {
    int a,b;
    cout << "1-sonni kiriting:";
    cin>>a;
    cout<<"2-sonni kiriting:";
    cin>>b;
    cout << "Ekub:"<<ekub(a,b);

    return 0;
}