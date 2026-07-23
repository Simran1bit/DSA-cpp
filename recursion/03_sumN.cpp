// sum of first n numbers using recursion
#include <iostream>
using namespace std;

void sumN(int start, int end, int sum){
    if(start>end){ // base case
        cout << sum << endl;
        return;
    }
    sumN(start+1,end,sum+start);
}

int main(){
    cout << "Enter N: ";
    int N;
    cin >> N;
    if(N<0){
        cout << "Please enter a positive number" << endl;
        return 0;
    }
    cout << "Sum of first N numbers: ";
    sumN(1,N,0);
    return 0;
}