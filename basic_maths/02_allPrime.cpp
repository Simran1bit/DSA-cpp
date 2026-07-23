// print all prime numbers between a given range
#include <iostream>
#include <vector>
using namespace std;

//Sieve of Eratosthenes algorithm
int primeRange(int n){
    if(n<2) return 0;
    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;
        for(int div = 2; div*div <n; div++){
            if(prime[div]){
                 for(int j = div*div; j< n; j+=div){
                     prime[j] = false;
                 }
             }
        }
        
        /* print all prime numbers
        for(int i = 2; i<n; i++){
            if(prime[i]){
                cout << i << " ";
            }
        }*/

        // return the count of prime numbers
        int count = 0;
        for(int i = 2; i<n; i++){
            if(prime[i]) count++;
        }return count;
}

int main(){
    int lower, upper;
    cout << "Enter lower bound: ";
    cin >> lower;
    cout << "Enter upper bound: ";
    cin >> upper;

    // Brute Force approach
    for(int i = lower; i<= upper; i++){
        bool prime = true;
        if(i<2) prime = false;
        for(int div = 2; div * div <= i; div++){
            if(i%div == 0){
                prime = false;
                break;
            }
        }
        if(prime){
            cout << i << " ";
        }
    }
    // Optimized approach
    cout << "\nOptimized approach:\n";
    cout << "Count of prime numbers: " << primeRange(upper) << endl;
    
    return 0;
}
