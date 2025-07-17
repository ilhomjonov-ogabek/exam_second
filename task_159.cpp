#include <iostream>
using namespace std;

int findMax(int n1, int n2, int n3) {
    int max = n1;
    if (n2 > max) {
        max = n2;
    }
    if (n3 > max) {
        max = n3;
    }
    return max;
}

int findMax(int n1, int n2, int n3, int n4) {
    int max = n1;
    if (n2 > max) {
        max = n2;
    }
    if (n3 > max) {
        max = n3;
    }
    if (n4 > max) {
        max = n4;
    }
    return max;
}

int main() {
    int n1, n2, n3, n4;
    cout << "1-sonni kiriting:";
    cin >> n1;
    cout << "2-sonni kiriting:";
    cin >> n2;
    cout << "3-sonni kiriting:";
    cin >> n3;
    cout << "4-sonni kiriting:";
    cin >> n4;
    cout << findMax(n1, n2, n3, n4) << endl;

    return 0;
}
