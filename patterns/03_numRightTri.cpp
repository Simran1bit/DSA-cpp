// Pattern printing program to print a right-angled triangle pattern of numbers
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter length of Triangle: ";
    cin>>n;
    cout << "\nRight triangle:" << endl;
    for(int i = 1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            cout << j;
        }cout<<'\n';
    }
    /*
    12345
    1234
    123
    12
    1
    */
    cout << "\nOpposite of Right triangle:" << endl;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<= n-i+1; j++){
            cout << j;
        }cout<<'\n';
    }

    /*
    Opposite of Right triangle:
    12345
    2345
    345
    45
    5
    cout << "\nOpposite of Right triangle:" << endl;
    for(int i = 1; i<=n; i++){
        for(int j = i; j<=n; j++){
            cout << j;
        }cout<<'\n';
    }
    */
    return 0;
}