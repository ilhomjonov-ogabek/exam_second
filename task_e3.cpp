#include <iostream>
using namespace std;
int main() {
    int arr[3];
    for (int i = 0; i < 3; i++) {
        cout << "arr["<<i<<"]:";
        cin >> arr[i];
    }
    for (int i = 0; i < 3; i++) {
        if (i != 0) {
            cout << arr[i]<<endl;
        }
    }
    cout << arr[0] << endl;



    return 0;
}