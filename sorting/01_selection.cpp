// Selection Sort
/*
in this sorting algorithm, 
we repeatedly find the minimum element from the array
and swap it with the first unsorted element in the array.
*/
/*Logic:
start with 1st element as small
then compare it with all other elements in the array
if any element is smaller than the current small element
then update the small element with that element
after comparing with all elements, 
swap the small element with the first unsorted element in the array
*/
#include <iostream>
using namespace std;
void selectionSort(int arr[], int n){
    if(n<2) return;
    for(int i = 0; i<n-1; i++){
        int small = i;
        for(int j = i+1; j<n;j++){
            if(arr[j]<arr[small]){
                small = j;
            }
        }
        if(small != i) swap(arr[i], arr[small]);
        /*
        this is not optimised version of selection sort
        because it swaps as soon as it finds a smaller element
        instead of finding the smallest element in the unsorted array

        for(int j = i; j<n;j++){
            if(arr[j]<arr[i]) swap(arr[i], arr[j]);
        }
        */
        
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
    selectionSort(arr, n);
    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << "\n";
    return 0;
}