// left rotate array by 1
#include <iostream>
using namespace std;
void leftRotateby1(int arr[], int size){
    if(size <= 1) return;
    int temp = arr[0];
    for(int i = 1;i<size;i++){
        arr[i-1] = arr[i];
    }arr[size-1] = temp;
    // int i = 0;
    // int temp = arr[0];
    // for(int j = 1;j<size; j++){
    //     if(arr[j] != arr[size-1]){
    //         arr[i] = arr[j];
    //         i++;
    //     }
    // }
    // arr[i] = temp;
}

void reverseArray(int arr[], int start, int end){
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void leftRotatebyk(int arr[], int size, int k){
    if(size <= 1) return;
    k = k % size; // in case k is greater than size
    if(k == 0) return;
    /*using recursion
    i wrote code for rotating left by 1 and then called it again and again
    
    int temp = arr[0];
    for(int i = 1;i<size;i++){
        arr[i-1] = arr[i];
    }arr[size-1] = temp;
    leftRotatebyk(arr, size, k-1);
    */
    reverseArray(arr, 0, k-1);
    reverseArray(arr, k, size-1);
    reverseArray(arr, 0, size-1);
}


int main(){
    int arr[5];
    cout << "Enter 5 elements of the array: ";
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);

    // Left rotate by 1
    leftRotateby1(arr, size);
    cout << "Array after left rotation by 1: ";
    for(int i = 0;i<size;i++){
        cout << arr[i] << " ";
    }cout << '\n';


    // Left rotate by k
    // Another possible solution lol
    // for(int i=0;i<k;i++){
    //         leftRotateby1(arr, size);
    // }    
    int arr2[5];
    cout << "Enter 5 elements of the array: ";
    for(int i=0; i<5; i++){
        cin >> arr2[i];
    }
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    cout<< "Enter k: ";
    int k;
    cin >> k;
    /*
    */
    leftRotatebyk(arr2, size2, k);
    cout << "Array after left rotation by " << k<< ": ";
    for(int i = 0;i<size2;i++){
        cout << arr2[i] << " ";
    }cout << '\n';
    return 0;
}