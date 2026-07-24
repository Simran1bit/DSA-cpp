// ABC Repeating Right Triangle
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter length of Triangle: ";
    cin >> n;
    /*
    A
    BB
    CCC
    DDDD
    EEEEE
    */
    cout << "\nRight triangle:" << endl;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<= i; j++){
            cout <<char('A'+i-1);
        }cout << '\n';
    }
    return 0;
}