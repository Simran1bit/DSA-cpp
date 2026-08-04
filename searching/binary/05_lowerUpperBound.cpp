// lower bound and upper bound in an sorted array
// Time Complexity: O(log n)
#include <iostream>
using namespace std;

/* example:
arr = {3, 5, 8, 9, 15, 19} key = 9
mid = 2, arr[mid] = 8 < key => left = mid+1
mid = 3, arr[mid] = 9 >= key => right = mid-1, lb_idx = mid
mid = 3, left = 4, right = 3 => exit loop => return lb_idx = 3
*/
int lowerBound(int arr[], int n, int key){
    int left = 0, right = n-1, mid, lb_idx = n;
    while(left<=right){
        mid = left+(right-left)/2;
        if(arr[mid]>= key){
            lb_idx = mid;
            right = mid-1;
        }
        else left = mid+1;
    }
    return lb_idx;
}
/* example:
arr = {3, 5, 8, 9, 15, 19} key = 9
mid = 2, arr[mid] = 8 <= key => left = mid+1
mid = 4, arr[mid] = 15 > key => right = mid-1, rb_idx = mid
mid = 3, arr[mid] = 9 <= key => left = mid+1
mid = 4, left = 4, right = 3 => exit loop => return rb_idx = 4
*/
int upperBound(int arr[], int n, int key){
    int left = 0, right = n-1, mid, rb_idx = n;
    while(left<=right){
        mid = left +(right-left)/2;
        if(arr[mid]> key){
            right = mid-1;
            rb_idx = mid;
        }
        else left = mid+1;
    }
    return rb_idx;
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
    cout << "Enter the key to find the lower bound: ";
    int key;
    cin >> key;
    
    cout << "The lower bound of " << key << " is at index: " << lowerBound(arr, n, key) << endl;
    cout << "The upper bound of " << key << " is at index: " << upperBound(arr, n, key) << endl;
    return 0;
}
