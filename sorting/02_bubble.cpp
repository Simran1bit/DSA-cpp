// Bubble Sort
/*
in this sorting algorithm,
we compare two neighboring elements
and swap them if they are in the wrong order
keep repeating this process until the array is sorted
*/  
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    if(n<2) return;
    for(int i = 0; i<n-1; i++){ // n-1 because last element is already sorted
        for(int j = 0; j<n-i-1; j++){ // n-i-1 because last i elements are already sorted
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
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
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << "\n";
    return 0;
}