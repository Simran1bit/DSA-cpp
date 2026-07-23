// print all prime numbers between a given range
#include <iostream>
using namespace std;
int main(){
    int lower, upper;
    cout << "Enter lower bound: ";
    cin >> lower;
    cout << "Enter upper bound: ";
    cin >> upper;
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
    return 0;
}