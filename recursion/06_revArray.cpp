// reverse of an array using recursion
#include <iostream>
using namespace std;
void printRevArr(int arr[], int end){
    if(end<0){
        return;
    }
    cout << arr[end] << " ";
    printRevArr(arr, end-1);
}
void revArr(int arr[], int start, int end){
    if(start>=end){
        return;
    }
    swap(arr[start], arr[end]);
    revArr(arr, start+1, end-1);
}
int main(){
    int n;
    cout << "Enter number of terms in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter "<< n <<" elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Original array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\nReversed array: ";
    printRevArr(arr, n-1);

    cout << "\n";
    cout << "Reversing original array: ";
    revArr(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}