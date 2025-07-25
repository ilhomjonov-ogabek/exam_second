#include <iostream>
using namespace std;
int main() {
    string s;
    cout << "Satrni kiriting:";
    cin>>s;
    int n;
    cout << "Sonni kiriting:";
    cin>>n;
    for(int i=0;i<n;i++) {
        cout<<s[i];
    }
    for(int i=s.size()-n;i<s.size();i++) {
        cout<<s[i];
    }
    return 0;
}