// Square Pattern
#include <iostream>
using namespace std;
int main(){
    int side;
    cout << "Enter side of square: ";
    cin >> side;
    for( int i = 1; i<=side; i++){
        for(int j = 1; j<=side; j++){
            cout<< "*";
        }cout<<"\n";
    }
    /*OR
    for( int i = 1; i<=side; i++){
        cout << string(side, '*') << endl;
    }
    */
}