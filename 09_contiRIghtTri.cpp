// Continous Right Triangle Pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter length of Triangle: ";
    cin >> n;
    /*
    1
    23
    456
    78910
    */
    int num = 1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << num<< " ";
            num++;
        }cout<<'\n';
    }
    return 0;
}