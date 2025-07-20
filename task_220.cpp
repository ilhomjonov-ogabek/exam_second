#include <iostream>
using namespace std;

int longestBlockLength(string str) {
    if (str.empty()) return 0;

    int maxLen = 1;     // eng uzun blok uzunligi
    int currLen = 1;    // joriy blok uzunligi

    for (int i = 1; i < str.length(); i++) {
        if (str[i] == str[i - 1]) {
            currLen++;
        } else {
            if (currLen > maxLen)
                maxLen = currLen;
            currLen = 1; // yangi blok boshlangan
        }
    }

    // oxirgi blok eng uzun bo‘lishi mumkin
    if (currLen > maxLen)
        maxLen = currLen;

    return maxLen;
}

int main() {
    string str;
    cout << "Satrni kiriting: ";
    getline(cin, str);

    int result = longestBlockLength(str);
    cout << "Eng uzun blok uzunligi: " << result << endl;

    return 0;
}
