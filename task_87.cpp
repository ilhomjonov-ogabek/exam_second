#include <iostream>
using namespace std;
int main() {
    int start,end;
    cout << "Start sonini kiriting:";
    cin >> start;
    cout << "End sonini kiriting:";
    cin >> end;
    int arr[end-start];
    for (int i = start; i < end; i++) {
       for (int j = 0; j < i; j++) {
            arr[j] = i;
           cout << arr[j] << " ";
           break;
       }
    }

    return 0;
}