#include <iostream>
using namespace std;
int main() {
    int arr1[2];
    int arr2[2];
    for (int i = 0; i < 2; i++) {
        cout << "arr1[" << i << "]:" << endl;
        cin >> arr1[i];
        cout << "arr2[" << i << "]:" << endl;
        cin >> arr2[i];
    }
    if (arr1[0]+arr1[1] > arr2[0]+arr2[1]) {
        cout << arr1[0]<<","<<arr1[1] << endl;
    }else if (arr1[0]+arr1[1] < arr2[0]+arr2[1]) {
        cout << arr2[0]<<","<<arr2[1] << endl;
    }else {
        cout << arr1[0]<<","<<arr1[1] << endl;
        cout << arr2[0]<<","<<arr2[1] << endl;

    }



    return 0;
}