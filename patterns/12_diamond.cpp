// Diamond pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    // upper half
    // space = n-i, star = 2*i-1
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i; j++){
            cout << " ";
        }
        for(int k = 1; k<=2*i-1; k++){
            cout<< "*";
        }cout <<'\n';
    }
    // lower half
    // space = n-i, star = 2*i-1
    for(int i = n-1; i>0; i--){
        for(int j = 1; j<=n-i; j++){
            cout << " ";
        }
        for(int k = 1; k<=(i*2-1); k++){
            cout << "*";
        }cout << '\n';
    }
    return 0;
}