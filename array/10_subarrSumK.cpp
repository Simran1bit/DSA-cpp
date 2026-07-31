// Longest Subarray with Sum K (positives)
#include <iostream>
using namespace std;
/*Logic:
two pointers left and right
right moves forward and adds the value to sum
if sum > k, subtract arr[left] from sum and move left forward
if sum == k, update maxLength
*/
int longestSubarraySumK(int arr[], int n, int k){
    int maxLength = 0, left = 0, right = 0, sum = 0;
    while(right <n){
        sum += arr[right];
        while(sum>k){
            sum -= arr[left];
            left ++;
        } 
        if(sum == k){
            maxLength = max(maxLength, right-left+1);
        } 
        right++;
    }
    return maxLength;
}
int main(){
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the sum K: ";
    cin >> k;
    int result = longestSubarraySumK(arr, n, k);
    cout << "The length of the longest subarray with sum " << k << " is: " << result << endl;
    return 0;
}