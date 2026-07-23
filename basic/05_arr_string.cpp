// array is used when we need to store similar data in a contagious memory location
#include <iostream>
using namespace std;
int main(){
    // array: stored in a memory location, similar data type, fixed size
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[3] << endl;

    // 2d array: used when data is in tabular form
    int arr2[3][5];
    arr2[1][3] = 10;
    cout << arr2[1][3] << endl;

    // string
    string str = "Simran";
    int len = str.size();
    cout << str[2]<<endl;
    cout << str[len-1]<<endl;
    str[len-2] = 'o';
    cout << str <<endl;
    return 0;
} 