// find missing number in an array of size n-1 containing numbers from 1 to n
// Time Complexity: O(n)
#include <iostream>
using namespace std;
int findMissingNumber(int arr[], int n){
    /*Logic:
    using Sum of first n natural numbers = n*(n+1)/2
    using long long to avoid integer overflow for large n
    then find sum of all array elements
    then subtract the arrSum from the sumN
    the result will be the missing number
    (assumption: 1 missing, distinct numbers, no duplicates, all numbers are positive)
    */   
    long long sumN = n*(n+1)/2; // sum of first n natural numbers
    long long arrSum = 0;
    for(int i=0; i<n-1; i++){
        arrSum += arr[i];
    }
    return sumN - arrSum;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n-1];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n-1; i++){
        cin >> arr[i];
    }

    cout << "The missing number is: " << findMissingNumber(arr, n) << endl;
    return 0;
}