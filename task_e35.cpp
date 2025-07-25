#include <algorithm>
#include <iostream>
using namespace std;
string palindrome(string s) {
    bool isPalindrome = true;
    for (int i = 0;i <s.size(); i++) {
        if (s[i] == s[s.size()-1-i]) {
            isPalindrome = true;
        }else {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome == true) {
        return "Palindrome";
    }else {
        return "Not a palindrome";
    }
}
int main() {
    string s;
    cout<<"Enter string:";
    cin>>s;
    cout<<palindrome(s);
    return 0;
}