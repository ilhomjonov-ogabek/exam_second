#include <algorithm>
#include <iostream>
#include <time.h>
using namespace std;
int main() {
    int n,m;
    cout << "massiv qatorini kiriting:";
    cin >> n;
    cout << "massiv ustunini kiriting:";
    cin >> m;
    int arr[n][m],max = 0,num [n];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 100 +1;
            cout << arr[i][j] << " ";
            num[i] += arr[i][j];
        }
        cout << " " << num[i];
        cout << endl;

    }
    cout << *min_element(num,num+n);
    return 0;
}