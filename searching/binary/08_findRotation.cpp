// find number of rotations in a sorted rotated array
#include <iostream>
using namespace std;
int findRotations(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] > arr[right]) left = mid+1;
        else right = mid;
    }
    return left;
}
/*Logic:
if mid > arr[right], then the smallest element is in the right half of the array, so we move left to mid+1
else the smallest element is in the left half of the array, so we move right to mid

ex: [4, 5, 6, 7, 0, 1, 2]
mid = 3, arr[mid] = 7, 7>arr[right] = 2, smallest is in right, so left = mid+1 = 4
mid = 5, arr[mid] = 1, 1<arr[right] = 2, smallest is in left, so right = mid = 5
mid = 4, arr[mid] = 0, 0<arr[right] = 1, smallest is in left, so right = mid = 4
mid = 4, left = 4, right = 4, so we exit the loop and return left which is 4, which is the number of rotations

ex: [1, 2, 3, 4, 5]
mid = 2, arr[mid] = 3, 3<arr[right] = 5, smallest is in left, so right = mid = 2
mid = 1, arr[mid] = 2, 2<arr[right] = 3, smallest is in left, so right = mid = 1
mid = 0, arr[mid] = 1, 1<arr[right] = 2, smallest is in left, so right = mid = 0
mid = 0, left = 0, right = 0, so we exit the loop and return left which is 0, which is the number of rotations
*/
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the rotated sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<< "Number of rotations: " << findRotations(arr, n);
    return 0;
}