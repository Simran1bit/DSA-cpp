// GCD and LCM
// GCD (Greatest Common Divisor) is the largest positive integer that divides both numbers.
// ex: GCD of 8 and 12 is 4, because 4 is the largest number that divides both 8 and 12.
// LCM (Least Common Multiple) is the smallest positive integer that is divisible by both numbers.
// ex: LCM of 8 and 12 is 24, because 24 is the smallest number that is divisible by both 8 and 12.
#include <iostream>
using namespace std;

int gcd(int x, int y){
    while(y!=0){ // for x:8, y:12
        int temp = x % y; //8%12=8, 12%8=4, 8%4=0
        x = y; //12,8,4
        y = temp; //8,4,0
    }return x;
}
int lcm(int x, int y){
    // LCM can be calculated using the formula: LCM(a,b) = (a*b)/GCD(a,b)
    int lcm = (x * y) / gcd(x, y);
    return lcm;
}
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a,b) << endl;
    cout << "LCM of " << a << " and " << b << " is: " << lcm(a,b) << endl;
    return 0;
}