// Pyramid pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    /*
        *
       ***
      *****
     *******
    */
    cout << "Pyramid pattern" << endl;
    for(int i = 1; i<=n; i++){
        for(int j = n-1; j>=i; j--){
            cout << " ";
        }
        for(int k = 1; k<=i+(i-1); k++){
            cout << "*";
        }cout <<'\n';
    }
    /*
    *******
     *****
      ***
       *
    */
    cout << "\nInverted Pyramid pattern" << endl;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i-1; j++){
            cout << " ";
        }
        for(int k = 1; k<= (n*2)-(i*2-1); k++){
            cout << "*";
        }cout <<'\n';
    }
    return 0;
}