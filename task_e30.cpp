#include <iostream>
using namespace std;
int main() {
    string str,word,result;
    cout<<"Enter string: ";
    getline(cin, str);
    cout<<"Enter word: ";
    getline(cin, word);
    for(int i = 0; i < str.length(); i++) {
           if(str.substr(i+1,word.length())==word) {
               result+=str[i];
               result+=str[i+word.length()+1];
           }
    }
    cout<<"Enter result: "<<result;
    return 0;
}