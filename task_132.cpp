#include <iostream>
using namespace std;

int raqamlarYigindisi(int son) {
    if (son < 0) son = -son;


    if (son == 0)
        return 0;


    return son % 10 + raqamlarYigindisi(son / 10);
}

int main() {
    int son;
    cout << "Butun son kiriting: ";
    cin >> son;

    int yigindi = raqamlarYigindisi(son);
    cout << "Raqamlar yig'indisi: " << yigindi << endl;

    return 0;
}
