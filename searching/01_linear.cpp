// Linear searching in arrays
#include <iostream>
using namespace std;
int linearSearch(int array[], int n, int k){
    for(int i = 0; i<n; i++){
        if(array[i] == k){
            // cout << k << " is present at index " << i << endl;
            return i;
        }
    }return -1;
    // cout << "Element not found." << endl;
}
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int found = linearSearch(arr, size, key);
    if(found != -1){
        cout << key << " is present at index " << found << endl;
    }
    else{
        cout << "Element not found." << endl;
    }
    return 0;
}