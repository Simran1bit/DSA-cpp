// Hollow Diamond/ symmetric void pattern
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    /*
    ******
    **  **
    *    *
    **  **
    ******
    */
   int sp = 0;
    // Upper half of the diamond
    for(int i = 1; i<=n; i++){
        for(int j = n; j>=i; j--){
            cout << "*";
        }
        for(int k = 1;k<=sp; k++){
            cout<<" ";
        }
        for(int j = n; j>=i; j--){
            cout << "*";
        }cout<<'\n';
        sp+=2;
    }

    // Lower half of the diamond
    sp = 2*n-2;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << "*";
        }
        for(int k = 1;k<=sp; k++){
            cout<<" ";
        }
        for(int j = 1; j<=i; j++){
            cout << "*";
        }cout<<'\n';
        sp-=2;
    }
    return 0;
}