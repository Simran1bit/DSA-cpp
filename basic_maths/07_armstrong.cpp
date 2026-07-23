// Armstrong number
// a num which is equal to the sum of its own digits raised to the power of the number of digits is called an Armstrong number. 
// For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout << "Enter a number: ";
    int num;
    cin >> num;
    int temp = num;
    int temp2 = num;
    int count = 0;
    int sum = 0;
    while(temp>0){
        temp/=10;
        count++;
    }
    while(temp2>0){
        int rem = temp2%10;
        sum = sum + pow(rem, count);
        temp2/=10;
    }
    if(sum == num){
        cout << num << " is an Armstrong number." << endl;
    }
    else{
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}