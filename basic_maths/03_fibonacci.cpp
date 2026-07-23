// Printing fibonacci series up to n terms
// 0 1 1 2 3 5 8 13 21 34
#include <iostream>
using namespace std;
int main(){
    cout << "Enter no. of terms: ";
    int n;
    cin >> n;
    int fib1 = 0;
    int fib2 = 1;
    for(int i = 0; i<=n; i++){
        cout << fib1 << " ";
        int temp = fib1 + fib2;
        fib1 = fib2;
        fib2 = temp;
    }
    return 0;
}