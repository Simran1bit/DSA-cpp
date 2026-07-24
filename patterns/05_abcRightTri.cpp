// ABC Right Triangle
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter length of Triangle: ";
    cin >> n;
    /*
    A
    AB
    ABC
    ABCD
    ABCDE
    */
   cout << "\nRight triangle:" << endl;
    for(int i = 0; i<n; i++){
        for(char ch = 'A'; ch <= 'A'+i; ch++){
            cout << ch;
        }cout<<'\n';
    }
    /*
    ABCDE
    ABCD
    ABC
    AB
    A
    */
    cout << "\nOpposite of right triangle:" << endl;
    for(int i = 0; i<n; i++){
        for(char ch = 'A'; ch < 'A'+ n-i; ch++){
            cout << ch;
        }cout<<'\n';
    }
    return 0;
}