// Leftmost and Rightmost Occurrence of an Element in a Sorted Array(possible duplicates)
// Time Complexity: O(log n)
// Leetcode 34: Find First and Last Position of Element in Sorted Array
#include <iostream>
#include <vector>
using namespace std;

// Leetcode submission sol
vector<int> searchRange(vector<int>& nums, int target){
    int n = nums.size();
        int mid, first =-1, last = -1, left = 0, right = n-1;
        while(left<=right){
            mid = left +(right-left)/2;
            if(target == nums[mid]){
                first = mid;
                right = mid-1;
            }
            else if(target < nums[mid]) right = mid-1;
            else left = mid+1;
        }
        left = 0, right = n-1;
        while(left<=right){
            mid = left +(right - left)/2;
            if(target == nums[mid]){
                last = mid;
                left = mid+1;
            }
            else if(target <nums[mid]) right = mid-1;
            else left = mid+1;
        }
        return {first, last};
}

int leftMostOccurrence(int arr[], int n, int key){
    int left = 0, right = n-1, mid, left_idx = -1;
    while(left<=right){
        mid = (left+right)/2;
        if(key == arr[mid]){
            left_idx = mid;
            right = mid-1;
        }
        else if (key < arr[mid]) right = mid-1;
        else left = mid +1;
    }
    return left_idx;
}
int rightMostOccurrence(int arr[], int n, int key){
    int left = 0, right = n-1, mid, right_idx = -1;
    while(left<=right){
        mid = (left+right)/2;
        if( key == arr[mid]){
            right_idx = mid;
            left = mid+1;
        }
        else if(key< arr[mid]) right = mid-1;
        else left = mid+1;
    }
    return right_idx;
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

    cout << "The leftmost and rightmost occurrence of " << key << " is: ";
    cout <<"{" <<leftMostOccurrence(arr, n, key) << ", " << rightMostOccurrence(arr, n, key) << "}" << endl;

    cout << "Using vector function (combined left+right): ";
    vector<int> nums(arr, arr + n);
    vector<int> result = searchRange(nums, key);
    cout << "{" << result[0] << ", " << result[1] << "}" << endl;

    return 0;
}
