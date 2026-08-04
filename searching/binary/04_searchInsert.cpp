// given a sorted array of distinct integers and a target value, 
// return the index if the target is found. If not, return the index 
// where it would be if it were inserted in order.
// Leetcode 35: Search Insert Position
#include <iostream>
using namespace std;
int searchInsert(int arr[], int n, int key){
    int left = 0, right = n-1, mid,index;
    while(left<=right){
        mid = (left+right)/2;
        if(key == arr[mid]) return mid;
        else if(key < arr[mid]){
            right = mid-1;
            index = mid;
        }else{
            left = mid+1;
            index = mid+1; 
        }
    }
    return index;
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

    cout << "The index of " << key << " should be: " << searchInsert(arr, n, key) << endl;
    
    return 0;
}
