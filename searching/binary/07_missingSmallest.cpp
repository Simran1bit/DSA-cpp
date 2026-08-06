// Return missing smallest positive integer in a distinct array of integers
#include <iostream>
using namespace std;
int missingSmallest(int arr[], int n) {
    int index, mid, left = 0, right = n-1;
    while(left<=right){
        mid = (left+right)/2;
        if(mid<arr[mid]){
            right = mid-1;
            index = mid;
        }
        else{
            index = mid+1;
            left = mid+1;
        }
    }
    return index;
}
/*Logic:
ex: [0, 1, 2, 3, 4]
mid = 2, arr[mid] = 2, so left side of array is correct, so we will search in right side of array
mid = 3, arr[mid] = 3, so left side of array is correct, so we will search in right side of array
mid = 4, arr[mid] = 4, so left side of array is correct, index = mid +1
mid was 4 so it returned 5 which is the missing smallest positive integer

ex: [0, 1, 2, 4, 5]
mid = 2, arr[mid] = 2, so left side of array is correct, so we will search in right side of array
mid = 3, arr[mid] = 4, which is greater than mid, so we assume that missing value can be mid, and we search left array
mid = 3, left = 3, right = 2, so we exit the loop and return index which is 3, which is the missing smallest positive integer

ex: [1, 2, 3, 4, 5]
mid = 2, arr[mid] = 3, which is greater than mid, so we assume that missing value can be mid, and we search left array
mid = 0, arr[mid] = 1, which is greater than mid, so we assume that missing value can be mid, and we search left array
mid = 0, left = 0, right = -1, so we exit the loop and return index which is 0, which is the missing smallest positive integer
*/
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int missing = missingSmallest(arr, n);
    cout << "The missing smallest positive integer is: " << missing << endl;
    return 0;
}