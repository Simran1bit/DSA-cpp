// remove duplicates from a sorted array
#include <iostream>
using namespace std;

/*Logic:
2 pointers i and j:
i points at 0th, j points at 1
if i and j are not equal then increment i and copy the value of j to i
size of the array will be i+1 because i points to the last unique element
*/
void removeDuplicates(int arr[], int &size){
    if(size==0 || size==1){
        return;
    }
    int i = 0;
    for(int j = 1; j<size; j++){
        if(arr[i] != arr[j]){
            // this
            arr[i+1] = arr[j];
            i++;
            /*and this are same
            i++;
            arr[i] = arr[j];            
            */
        }
    }
    // i always points to the last unique element so size = i+1
    size = i+1;
    return;
}
int main(){
    int arr[5];
    cout << "Enter 5 elements of the array: ";
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    removeDuplicates(arr, size);
    cout << "Array after duplicate removal: ";
    for(int i = 0;i<size;i++){
        cout << arr[i] << " ";
    }cout << '\n';
    cout << "The new size of the array after removing duplicates is: " << size;
    return 0;
}