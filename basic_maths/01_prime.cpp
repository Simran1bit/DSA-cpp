#include <iostream>
using namespace std;
int main(){
    // check if a number is prime or not
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    for(int div = 2; div*div<=n; div++){
        if(n%div == 0){
            count++;
        }
    }
    if(count==0){
        cout << "Prime" << endl;
    }
    else{
        cout << "Not Prime" << endl;
    }
    return 0;
}