#include <iostream>
using namespace std;
int main() {
    int n,m;
    cout << "massiv qatorini kiriting:";
    cin >> n;
    cout << "massiv ustunini kiriting:";
    cin >> m;
    int arr[n][m],max_man = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "arr["<<i<<"]["<<j<<"]:";
            cin >> arr[i][j];
            if (arr[i][j] <0 &&  arr[i][j] > max_man) {
                max_man = arr[i][j];
            }

        }
    }
    cout <<"Natija:"<< max_man << endl;



    return 0;
}