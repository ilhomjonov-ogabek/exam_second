#include <iostream>
using namespace std;

int main() {
    int n1, n10, n100;
    for (int i = 100; i <= 999; i++) {
        n1 = i % 10;
        n10 = (i / 10) % 10;
        n100 = i / 100;
        if (n1 == n10 || n1 == n100 || n10 == n100 || n1 == n10 == n100) {
            cout << i << " ";
        }
    }
    return 0;
}
