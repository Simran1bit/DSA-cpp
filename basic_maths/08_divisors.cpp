// Divisors of a number
// ex: 12 -> 1, 2, 3, 4, 6, 12
#include <iostream>
using namespace std;
int main(){
    cout << "Enter a number: ";
    int num;
    cin >> num;
    for(int div = 1; div*2 <= num; div++){
        if(num%div == 0){
            cout << div << " ";
        }
    }
    cout << num << endl;
    return 0;
}