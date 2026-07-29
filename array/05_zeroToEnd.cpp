// In an array move all the zeros to the end of the array while maintaining the relative order of the non-zero elements.
#include <iostream>
using namespace std;

/*Logic:
2 pointers i and j:
both i and j point at 0th
if arr[j] is non-zero then copy the value of j to i and increment i
this skips all the zeros and copies only the non-zero elements to the front of the array
After this loop, i will point to the position of remaining elements in the array
then fill the remaining elements with zeros
*/
void moveZerosToEnd(int arr[], int n) {
    if(n<2) return;

    int i = 0;
    for(int j = 0; j<n; j++){
        if(arr[j]){
            arr[i] = arr[j];
            i++;
        }
    }
    for(int j = i; j<n; j++){
        arr[j] = 0;
    }
            
    /* swapping the first zero with the next non-zero element
    for(int i = 0; i<n; i++){
        if(!arr[i]){
            for(int j = i+1; j<n;j++){
                swap(arr[i], arr[j]);
                if(arr[i]) break;
            }
        }
    }*/
}
int main(){
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    moveZerosToEnd(arr, n);
    cout << "Array after moving zeros to the end: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}