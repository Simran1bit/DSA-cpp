// Prime Factorization
// PF are the prime numbers that divide a number exactly, without leaving a remainder.
// For example, the prime factors of 12 are 2 and 3, since 12 can be expressed as 2 * 2 * 3.
#include <iostream>
using namespace std;
int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;
    if(n <= 1){
        cout << "Please enter a number greater than 1." << endl;
        return 0;
    }
    cout << "The prime factors of " << n << " are: ";
    for(int div = 2; div*div<=n; div++){
        while(n%div==0){
            n = n/div;
            cout << div << " ";
        }
    }
    if(n!=1){
        cout << n <<endl;
    }
    return 0;
}