#include <iostream>
using namespace std;
int main() {
    int n,m,num = 1,num1 = 1;
    cout << "Massivni qatorlar sonini kiriting:";
    cin >> n;
    cout << "Massivni ustunlar sonini kiriting:";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "arr["<< i << "]["<<j<<"]:" ;
            cin >> arr[i][j];
            if (i == 0) {
                num *= arr[i][j];
            }
            if (i == n - 1) {
                num1 *= arr[i][j];
            }
        }
    }
    cout << "1-qator ko'paytmasi:" << num << endl;
    cout << "2-qator ko'paytmasi:" << num1 << endl;




    return 0;
}