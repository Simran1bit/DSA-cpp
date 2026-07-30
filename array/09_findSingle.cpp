// every element appears twice except for one element which appears only once. 
// Find that single element.
// Time Complexity: O(n)
#include <iostream>
using namespace std;
int findSingle(int arr[], int n){

    //Optimized (XOR) approach
    int ans = 0;
    for(int i= 0; i<n; i++){
        ans ^= arr[i];
    }
    return ans;
    /* Brute Force
    int result = -1;
    for(int i = 0; i<n; i++){
        int count = 0;
        for(int j = 0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
                if(count == 2) break;
            }
        }
        if(count == 1){
            result = arr[i];
            break;  
        }
    }return result;*/
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = findSingle(arr, n);
    cout << "The single element in the array is: " << result << endl;
    return 0;
}