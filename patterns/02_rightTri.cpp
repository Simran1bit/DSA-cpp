// Pattern to print right triangle
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter length of Triangle: ";
    cin>>n;
    cout << "\nRight triangle:" << endl;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }cout<<"\n";
    }
    cout << "\nOpposite of right triangle:" << endl;
    for(int i = 1; i<=n; i++){
        for(int j = i; j<=n;j++){
            cout<<"*";
        }cout<<"\n";
    }
    return 0;
}