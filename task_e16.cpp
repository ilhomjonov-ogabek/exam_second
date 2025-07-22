#include <iostream>
using namespace std;

int main() {
    float n;
    cout << "Enter number: ";
    cin >> n;
    float num = 0, num1 = 0;
    for (float i = 1.1; i <= n/10+1; i+=0.2) {
        num = num + i;
    }
    for (float i = 1.2; i <= n/10+1; i+=0.2) {
        num1 = num1 + i;
    }
    cout << "Yig'indi:"<< num-num1 << endl;



    return 0;
}
