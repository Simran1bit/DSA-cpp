// peak index in a mountain array
#include<iostream>
using namespace std;

/* this case is not guaranteed to work
because mid+1 can go out of bounds when mid = n-1
and mid-1 can go out of bounds when mid = 0

(in this case the array is guaranteed to be a mountain array: 1 peak)
possible cases:
arr[i-1] < arr[i] < arr[i+1] => increasing
    - left = mid+1
arr[i-1] > arr[i] > arr[i+1] => decreasing
    - right = mid-1
arr[i-1] < arr[i] > arr[i+1] => peak 
    - return mid
*/ 
int peakIndexInMountainArray(int arr[],int n){
    int mid, left=0, right = n-1;
    while(left<=right){
        mid = (left+right)/2;
        if(mid==0 || mid==n-1) return -1; // peak cannot be at the ends
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) return mid;
        else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]) left = mid+1;
        else right = mid-1;
    }
    return -1;
}
/* Leetcode 162: Find Peak Element
Leetcode 852: Peak Index in a Mountain Array
(in this case the array is not guaranteed to be a mountain array: 1 or more peaks)
ex: [1, 2, 1, 3, 5, 6, 4]
peak value can be 2 or 6, peak index can be 1 or 5, so we will return any one of them
mid = 3, arr[mid] = 3, arr[mid+1] = 5, left = mid+1
mid = 5, arr[mid] = 6, arr[mid+1] = 4, right = mid
mid = 4, arr[mid] = 5, arr[mid+1] = 6, left = mid+1
mid = 5, left = 5, right = 5, so we exit the loop and return left which is 5, which is the peak index

(here mid+1 is always safe left<right, not out of bounds)
*/
int peakIndex(int arr[],int n){
    int mid, left=0, right = n-1;
    while(left<right){
        mid = (left+right)/2;
        if(arr[mid]>arr[mid+1]) right = mid;
        else left = mid+1;
    }
    return left;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Is it a mountain array? (1 for yes, 0 for no): ";
    int isMountain;
    cin>>isMountain;
    if(isMountain){
        int index = peakIndexInMountainArray(arr, n);
        cout<<"The peak value "<< arr[index]<<" is at index: "<<index<<endl;
    }
    else{
        int index = peakIndex(arr, n);
        cout<<"The peak value "<< arr[index]<<" is at index: "<<index<<endl;
    }
    return 0;
}