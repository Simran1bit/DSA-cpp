// Insertion Sort
/*
in this sorting algorithm,
we take one element at a time and insert it into its correct position in the sorted part of the array
continue this process until the entire array is sorted
*/
/* working: ex - 9 7 5 3 1
pass 1: 
key = 7, j = 0
compares 9>7 (True)
shifts 9 to right (9 9 5 3 1)
inserts 7 at index 0 (7 9 5 3 1)

pass 2:
key = 5, j = 1
compares 9>5 (True)
shifts 9 to right (7 9 9 3 1)
compares 7>5 (True)
shifts 7 to right (7 7 9 3 1)
inserts 5 at index 0 (5 7 9 3 1)

pass 3:
key = 3, j = 2
compares 9>3 (True)
shifts 9 to right (5 7 9 9 1)
compares 7>3 (True)
shifts 7 to right (5 7 7 9 1)
compares 5>3 (True)
shifts 5 to right (5 5 7 9 1)
inserts 3 at index 0 (3 5 7 9 1)

and so on until the array is sorted (1 3 5 7 9)
*/

#include <iostream>
using namespace std;
void insertionSort(int arr[], int n){
    if(n<2) return;
    for(int i = 1; i<n; i++){
        int j = i-1;
        int key = arr[i];
        while(j>=0 && arr[j]> key){
            arr[j+1] = arr[j];//right shift
            j--;
        }arr[j+1] = key; //after right shifting, j will be at arr[j]<key, so we need to insert key at arr[j+1]
    }
}
void anotherInsertionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j>=0; j--){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }else{
                break;
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
    insertionSort(arr, n);
    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << "\n";
    return 0;
}