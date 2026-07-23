/* take the day no. and print the corresponding day 
for 1 print monday and so on for 7 print sunday*/

#include <iostream>
using namespace std;
int main(){
    cout << "Enter a no. (1-7): ";
    int day;
    cin >> day;
    switch (day){
        case 1:
        cout << "Monday" << endl;
        break;

        case 2:
        cout << "Tuesday" << endl;
        break;

        case 3:
        cout << "Wednesday" << endl;
        break;

        case 4: 
        cout << "Thursday" << endl;
        break;

        case 5:
        cout << "Friday" << endl;
        break;

        case 6:
        cout << "Saturday" << endl;
        break;

        case 7:
        cout << "Sunday" << endl;
        break;

        default:
        cout << "Invalid Input" << endl;
    }
    // int f = 5;
    // int f2 = 7;
    // for(int i = f; i<=f2; i++){
    //     cout << f<< endl;
    //     f = f+f2;
    // }
    return 0;
}
