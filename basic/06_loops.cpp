// loops in C++

#include <iostream>
using namespace std;
int main(){
    // for loop
    for(int i = 1; i<=10;i++){
        cout << "Hello from For" << endl;
    }
    // while loop
    int j = 1;
    while(j<=5){
        cout << "Hello from While"<< endl;
        j++;
    }
    // do while loop
    int k = 1;
    do{
        cout << "Hello from Do While" << endl;
        k++;
    }while(k<=5);
    return 0;
}