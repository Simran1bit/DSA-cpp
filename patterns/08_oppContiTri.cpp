// Opposite ABC Continuos right triangle
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter length of Triangle: ";
    cin >> n;
    /*
    E
    DE
    CDE
    BCDE
    ABCDE
    */
    for(int i= 1; i<=n; i++){
        char ch = 'A' + n - i;
        for(int j = 1; j<=i; j++){
            cout << ch;
            ch++;
        }cout << '\n';
    }
    return 0;
}
