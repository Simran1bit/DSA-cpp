// check if an array is sorted in ascending order
#include <iostream>
using namespace std;
bool isSorted(int arr[], int size){
    for(int i = 1; i<size; i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[5];
    cout << "Enter 5 elements of the array: ";
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    bool sorted = isSorted(arr, size);
    if(sorted){
        cout << "The array is Sorted ";
    }
    else cout << "The array is not Sorted";
    return 0;
}