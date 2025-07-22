#include <iostream>
using namespace std;
int main() {
    int a[3],b[3],c[2];
    for (int i = 0; i < 3; i++) {
        cout << "a["<<i<<"]:";
        cin >> a[i];
        cout << "b["<<i<<"]:";
        cin >> b[i];
    }
    c[0] = a[1];
    c[1] = b[1];
    cout << c[0]<<" "<<c[1]<< endl;



    return 0;
}