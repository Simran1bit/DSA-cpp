// Palindrome: A number or string that reads the same backward as forward
#include <iostream>
using namespace std;

int main(){
    cout << "Enter a number: ";
    int num;
    cin >> num;
    int temp = num;
    int rev_num = 0;
    while(temp>0){
        int rem = temp%10;
        rev_num = rev_num * 10 + rem;
        temp/=10;
    }
    if (num == rev_num){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
    return 0;
}