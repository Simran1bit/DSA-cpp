// Binary Search
// Time Complexity: O(log n)
#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    if(n == 0) return -1; // array is empty
    int mid, left = 0, right = n-1;
    while(left<=right){
        mid = (left+right)/2;
        if(key == arr[mid]) return mid;
        else if (key > arr[mid]) left = mid +1;
        else right = mid - 1; // key < arr[mid]
    }
    return -1; // element not found
}
/*Logic: (Dictionary)
- we take middle element and compare it with the key
- if key is equal to the middle element, then we return the index of the middle element
- if key is greater than the middle element, then we search in the right half of the array
- if key is less than the middle element, then we search in the left half of the array
- we repeat this process until we find the key or the left index is greater than the right index

example:
arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], n = 10, key = 7
1) 5 == 7? No, 7 > 5, so we search in the right half of the array
    arr = [6, 7, 8, 9, 10], n = 5, key = 7
2) 8 == 7? No, 7 < 8, so we search in the left half of the array
    arr = [6, 7], n = 2, key = 7
3) 6 == 7? No, 7 > 6, so we search in the right half of the array
    arr = [7], n = 1, key = 7
4) 7 == 7? Yes, so we return the index of the middle element
*/

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
    
    if(binarySearch(arr, n, key) == -1){
        cout << "Element not found." << endl;
        return 0;
    }
    cout<< "Element found at index: " << binarySearch(arr, n, key);

    return 0;
}