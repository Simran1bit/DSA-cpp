// factorial of a number using recursion
#include <iostream>
using namespace std;
int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;
    if(n < 0){
    cout << "Factorial is not defined for negative numbers.";
    return 0;
    }
    cout << "Factorial of " << n << ": " << fact(n);
    return 0;
}