// Count Occurrence of an Element in a Sorted Array
#include <iostream>
using namespace std;
int countOccurrence(int arr[], int n, int key){
    int mid, left = 0, right = n-1, first = -1, last = -1;
    while(left<=right){
        mid = left +(right-left)/2;
        if(key == arr[mid]){
            first = mid;
            right = mid-1;
        }
        else if (key <arr[mid]) right = mid-1;
        else left = mid+1;
    }
    left = 0, right = n-1;
    while(left<=right){
        mid = left +(right-left)/2;
        if(key == arr[mid]){
            last = mid;
            left = mid+1;
        }
        else if(key<arr[mid]) right = mid-1;
        else left = mid+1;
    }
    return last-first+1;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array in sorted order: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;

    cout << "The count of " << key << " is: " << countOccurrence(arr, n, key) << endl;
    
    return 0;
}