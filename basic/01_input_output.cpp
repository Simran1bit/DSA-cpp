// iostream: used to take input and print output on the console
// bits/stdc++.h: includes all the standard C++ libraries
#include <iostream>
int main(){
    // cout is present in the iostream header file and std namespace
    // std::cout - is used to print the output on the console
    // std::endl - is used to print the output on the console and move the cursor to the next line

    std::cout << "Hello World\n";
    std::cout << "Hello Simran" << "\n";
    std::cout << "Hello Sonakshi" << std::endl;

    // now we don't need to use std:: prefix for cout and endl because we are using the using namespace std; statement
    // can be used outside the main function as well
    using namespace std;
    cout << "Hello Sumedha\n";
    cout << "Hello Ananya" << "\n";
    cout << "Hello Kunal" << endl;

    // cin is used to take input from the user
    int x, y;
    cin >> x >> y;
    cout << "You entered: " << x << " and " << y << endl;

    return 0;
}