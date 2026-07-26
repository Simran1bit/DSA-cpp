// ABC Pyramid pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter length: ";
    cin>>n;
    /*
        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
    */
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i; j++){
            cout << " ";
        }
        //inc loop
        for(int j = 1; j<=i;j++){
            cout << char(64+j);
        }
        //dec loop
        for(int j = i-1; j>=1; j--){
            cout<< char(64+j);
        }cout<<'\n';
    }
    /*
    E
    ED
    EDC
    EDCB
    EDCBA

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << char('A'+n-j);
        }cout << '\n';
    }*/
    return 0;
}