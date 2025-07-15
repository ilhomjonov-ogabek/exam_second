#include <iostream>
using namespace std;
int main() {
    int n,num[n],num1 = 0;
    cout << "Massiv uzunligini kiritng:";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout <<"arr[" << i <<"]=";cin >> num[i];
        if (num[i]<num[0]) {
            num1 += num[i];
        }
    }
    cout <<"Yig'indi:" << num1;

    return 0;
}