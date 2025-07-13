#include <iostream>
using namespace std;
int array1(int n,int arr[]) {
    int sum = 0;
    int sum1 = 1;
    for (int i=0;i<n;i++) {
        cin>>arr[i];
        if (arr[i]%2==1) {
            sum1 *= arr[i];
        }else {
            sum += arr[i];
        }
    }
    return  sum1 - sum;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    cout << array1( n ,& arr[n]) << endl;
    return 0;
}
