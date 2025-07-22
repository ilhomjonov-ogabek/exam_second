#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "start sonini kiriting:";
    cin >> a;
    cout << "end sonini kiriting:";
    cin >> b;
    int arr[b - a + 1];
    string c, d, f;
    for (int i = 0; i < b; i++) {
        arr[i] = a;
        a++;
        if (arr[i] % 3 == 0 && arr[i] % 5 == 0) {
            cout << " FizzBuzz ";
        } else if (arr[i] % 5 == 0) {
            cout << " Buzz ";
        } else if (arr[i] % 3 == 0) {
            cout << " Fizz ";
        } else {
            cout << arr[i]<<" ";
        }
    }


    return 0;
}
