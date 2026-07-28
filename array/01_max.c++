// to find max element in an array
#include <iostream>
using namespace std;
int max_element(int arr[], int size){
    int max = arr[0];
    for(int i = 0; i<size;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
    // cout << "The maximum element in the array is: " << max << endl;
}
// to find second max element in an array
int sec_max_ele(int arr[], int size){
    int max = arr[0];
    int sec_max = arr[0];
    for(int i = 0; i< size; i++){
        if(max< arr[i]){
            sec_max = max;
            max = arr[i];
        }
        else if (sec_max< arr[i] && arr[i] !=max){
            sec_max = arr[i];
        }
    }
    return sec_max;
}

int main(){
    int arr[5];
    cout << "Enter 5 elements of the array: ";
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = max_element(arr, size);
    cout << "The maximum element in the array is: " << max << endl;
    int sec_max = sec_max_ele(arr, size);
    cout << "The second largest element in array is: "<< sec_max << endl; 
    return 0;
}