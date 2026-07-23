//print 1 to N and N to 1 using recursion
#include <iostream>
using namespace std;

// print 1 to n
void numNtimes(int start, int end){
    if(start>end){
        return;
    }
    cout << start << endl;
    numNtimes(start+1,end);
}

// print n to 1
void nto1(int n){
    if(n<=0){
        return;
    }
    cout << n << endl;
    nto1(n-1);
}

int main(){
    cout << "Enter N: ";
    int N;
    cin >> N;
    if(N<0){
        cout << "Please enter a positive number" << endl;
        return 0;
    }
    cout << "Printing 1 to N:" << endl;
    numNtimes(1,N);
    cout << "Printing N to 1:" << endl;
    nto1(N);
    return 0;
}