// allocate minimum number of pages to allocate to m students
#include <iostream>
using namespace std;

int findPages(int arr[], int n, int m) {
    if(m>n) return -1;
    int mid, left = 0, right = 0, answer = -1;
    for(int i = 0; i<n; i++) right += arr[i];
    while(left<=right){
        mid = left+(right-left)/2;
        int sum = 0, count = 1;
        for(int i = 0; i<n; i++){
            sum += arr[i];
            if(sum>mid){
                sum = arr[i];
                count++;
            }
        }
        if(count>m) left = mid+1;
        else{
            answer = mid;
            right = mid-1;
        }
    }
    return answer;
}
/*Logic:
The problem is to allocate books to students 
such that the maximum number of pages assigned to any student is minimized.

ex: arr = [10, 15, 10, 20], m = 2
left = 0, right = 55 (sum of all pages)
mid = 27, sum = 0, count = 1
sum = 10, sum = 25, sum = 35 > mid, so count = 2, sum = 10
sum = 30 > mid, so count = 3
count = 3 > m, so left = mid+1 = 28
mid = 41, sum = 0, count = 1
sum = 10, sum = 25, sum = 35, sum = 55 > mid, so count = 2, sum = 20
count = 2 <= m, so answer = mid = 41, right = mid-1 = 40
mid = 34, sum = 0, count = 1
sum = 10, sum = 25, sum = 35 > mid, so count = 2, sum = 20
count = 2 <= m, so answer = mid = 34, right = mid-1 = 33
mid = 30, sum = 0, count = 1
sum = 10, sum = 25, sum = 35 > mid, so count = 2, sum = 20
count = 2 <= m, so answer = mid = 30, right = mid-1 = 29
answer = 30, left = 30, right = 29, 
so we exit the loop and return answer which is 30,
which is the minimum number of pages allocated to a student
*/

int main() {
    int n, m;
    cout << "Enter the number of books: ";
    cin >> n;
    int arr[n];
    cout << "Enter the number of pages in each book: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number of students: ";
    cin >> m;
    cout << "Minimum number of pages allocated to a student: " << findPages(arr, n, m);
    return 0;
}