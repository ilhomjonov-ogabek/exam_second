#include <iostream>
using namespace std;
int main() {
    int n,m;
    cout << "massiv qatorini kiriting:";
    cin >> n;
    cout << "massiv ustunini kiriting:";
    cin >> m;
    int arr[n][m],num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "arr["<<i<<"]["<<j<<"]:";
            cin >> arr[i][j];
            if (i == 0) {
                num = num * arr[i][j];
            }
            if (i == n-1) {
                num = num * arr[i][j];
            }
        }
    }
    cout <<"Natija:"<< num << endl;



    return 0;
}