// Union of 2 sorted arrays
#include <iostream>
using namespace std;
void unionOfArrays(int arr1[], int n, int arr2[], int m){
    int arr3[n+m]; // array to store the union of the two arrays
    if (n == 0 && m == 0){
        cout << "Both arrays are empty." << endl;
        return;
    }
    else if (n == 0){
        cout << "The union of the two arrays is: ";
        for(int i=0; i<m; i++){
            cout << arr2[i] << " ";
        }
        cout << endl;
        return;
    }
    else if (m == 0){
        cout << "The union of the two arrays is: ";
        for(int i=0; i<n; i++){
            cout << arr1[i] << " ";
        }
        cout << endl;
        return;
    }
    /*Logic:
    - using 3 pointers
      i: arr1, j: arr2, k: arr3
      all points at 0th index
    
    - if arr1 has < element, then check if it is != to the last element of arr3
      then add it to arr3 and i++ k++
      if equals to the last element of arr3, then i++ only

    - same for if arr2 has smaller element

    - if both are equal, then check if it is != to the last element of arr3
      then add it to arr3 and i++ j++ k++
      if equals to the last element of arr3, then i++ j++ only

    - after this while, check if any array has any elements left
      if yes, then check if it is != to the last element of arr3
      then add it to arr3 and i++ k++ or j++ k++
    
    */
    else{
        int i=0, j=0, k=0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                if(k==0 || arr3[k-1] != arr1[i]){
                    arr3[k] = arr1[i]; k++;
                }i++;
            }
            else if(arr1[i]>arr2[j]){
                if(k==0|| arr3[k-1] != arr2[j]){
                    arr3[k] = arr2[j]; k++;
                }j++;
            }
            else{
                if(k == 0 || arr3[k-1] != arr1[i]){
                    arr3[k] = arr1[i]; k++;
                }i++; j++;
            }
        }
        while(i<n){
                if(k==0 || arr3[k-1] != arr1[i]){
                    arr3[k] = arr1[i]; k++;
                }i++;
        }
        while(j<m){
            if(k==0 || arr3[k-1] != arr2[j]){
                    arr3[k] = arr2[j]; k++;
                }j++;
        }
        cout << "The union of the two arrays is: ";
        for(int i=0; i<k; i++){
            cout << arr3[i] << " ";
        }
        cout << endl;
        return;
    }
}
int main(){
    int size1, size2;
    cout << "Enter the size of the first array: ";
    cin >> size1;
    int arr1[size1];
    cout << "Enter the sorted elements of the first array: ";
    for(int i=0; i<size1; i++){
        cin >> arr1[i];
    }
    cout << "Enter the size of the second array: ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter the sorted elements of the second array: ";
    for(int i=0; i<size2; i++){
        cin >> arr2[i];
    }
    unionOfArrays(arr1, size1, arr2, size2);
    return 0;
}