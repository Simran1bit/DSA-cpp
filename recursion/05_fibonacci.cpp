// fibonacci using recursion
// 0 1 1 2 3 5 8 
#include <iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;// fib(0) = 0, fib(1) = 1
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    if(n < 0){
        cout << "Please enter a non-negative number.";
        return 0;
    }
    cout << "Fibonacci Series: ";
    for(int i=0; i<n; i++){
        cout << fib(i) << " ";
    }
    return 0;
}