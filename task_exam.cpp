#include <iostream>
using namespace std;
int main() {
    int n,k,num = 0;
    cout << "massiv uzunligini kiriting:";
    cin >> n;
    int arr[n];
    cout << "massiv indeksini kiriting:";
    cin >> k;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
        if (i == k-1 || i == k+1){
            num += arr[i];
        }
    }
    cout << "massivlar sig'indisi:" << num << endl;


    return 0;
}