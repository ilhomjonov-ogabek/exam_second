#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Massiv uzunligini kiriting:";
    cin >> n;
    int arr[n];
    int n1 = 0,num =0;
    int newarr[n1];
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
        if (arr[i] != 10) {
            newarr[n1] = arr[i];
            n1++;
        }else {
            num +=1;
        }
    }

    for (int i = 0; i < n1; i++) {

        cout << newarr[i] << " ";
    }
    return 0;
}