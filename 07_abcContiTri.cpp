// ABC Continuous Right Triangle
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter length of Triangle: ";
    cin >> n;
    /*
    A
    BC
    DEF
    GHIJ
    KLMNO
    */
    cout << "\nRight triangle:" << endl;
    char ch = 'A';
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << ch;
            ch++;
        }cout<<'\n';
    }
    return 0;
}