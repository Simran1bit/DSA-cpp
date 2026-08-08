// search element in rotated sorted array
#include <iostream>
using namespace std;
int searchInRotated(int arr[], int n, int key){
    int left = 0, right = n-1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(arr[mid] == key) return mid;
        else if(arr[left]<=arr[mid]){ //left side sorted
            // if key is in btw start and mid so key is in left
            if(key>=arr[left] && key<arr[mid]) right = mid-1;
            // else right
            else left = mid+1;
        }
        else{
            if(key > arr[mid] && key<= arr[right]) left = mid+1;
            else right = mid-1;
        }
    }
    return -1; // Element not found
}
/*Logic:
ex: arr = [4,5,6,7,0,1,2], key = 5
left = 0, right = 6, mid = 3
arr[mid] = 7, arr[left] = 4, arr[right] = 2
    (else if) arr[left]<arr[mid] => 4<7 => true, so left side sorted
    key = 5, arr[left] = 4, arr[mid] = 7
        key>=arr[left] (5>=4) True && key<arr[mid] (5<7) True => so right = mid-1 = 2
left = 0, right = 2, mid = 1
arr[mid] = 5, arr[left] = 4, arr[right] = 6
    arr[mid] == key => return mid = 1
*/
int main() {
    int n, key;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the rotated sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> key;
    int index = searchInRotated(arr, n, key);
    cout << "Element found at index: " << index << endl;
    return 0;
}