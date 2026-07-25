// Right Triangle with 1s and 0s
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    /*
    1
    01
    101
    0101
    10101
    */
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            /* can use this instead:
            cout << ((i + j) % 2 == 0);
            when even it return True and vice versa
            without specifying bool (boolalpha) the cout gives 0 or 1
            */
            if((i+j)%2 == 0) cout << 1;
            else cout<<0;
        }cout<<'\n';
    }
    return 0;
}
