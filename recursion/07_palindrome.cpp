// check if string is palindrome using recursion
#include <iostream>
using namespace std;

bool palindrome(const string &str, int start, int end){
    if(start >= end){
        return true;
    }
    if(str[start]!=str[end]){
        return false;
    }
    return palindrome(str, start+1, end-1);
}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    bool pal = palindrome(str,0,str.length()-1);
    if (pal){
        cout << str << " is Palindrome."<< endl;
    }
    else{
        cout << str << " is not Palindrome." <<endl;
    }
    /* Reversing the string and comparing with original string
    int len = str.length();
    string orig = str;
    revString(str, 0, len-1);
    if (str == orig){
        cout << orig << " is Palindrome."<< endl;
    }
    else{
        cout << orig << " is not Palindrome." <<endl;
    }*/
    return 0;
}
/*void revString(string &str, int start, int end){
    if(start >= end){
        return;
    }
    swap(str[start], str[end]);
    revString(str, start+1, end-1);
}*/