// Count Consecutive 1s in a Binary Array
#include <iostream>
using namespace std;
int maxConsOnes(int arr[], int n){
    int count = 0;
    int maxCount = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]){
            count++;
            maxCount = max(count, maxCount);
        }else count = 0;
    }
    return maxCount;
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array (0s and 1s): ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int maxConsecutiveOnes = maxConsOnes(arr,n);
    cout << "Maximum consecutive 1s in the array: " << maxConsecutiveOnes << endl;
    return 0;
}