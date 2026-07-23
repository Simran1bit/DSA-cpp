#include <iostream>
using namespace std;
int main(){
     //data types in C++: int, float, double, char, bool, string

    // int: used to store whole numbers
    int a = 10;

    // long: used to store whole numbers with larger range
    long b = 100000;

    // long long: used to store whole numbers with even larger range
    long long c = 10000000000;

    // float: used to store decimal numbers with single precision
    // double: used to store decimal numbers with double precision
    // float and double can store integer values as well
    float d = 10.5;
    float e = 5; // implicit type conversion from int to float
    double f = 20.5;
    cout << "Value of d: " << d << " and e: " << e << " and f: " << f << endl;

    // string: used to store a sequence of characters
    // string only captures the first word of the input, it gets terminated by a space
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1<< " " << s2 <<endl;

    // s3 is not printing because previous cin left a new line buffer in the input stream, 
    // so we need to clear the input stream before taking input for s3
    cin.ignore(); // clears the input stream

    // getline() function is used to take input from the user and store it in a string variable
    // without worrying about the spaces, it terminates at line break like \n
    string s3;
    getline(cin,s3);
    cout << s3 << endl;

    // string: "", char: ''
    // string tends to take more memory than char
    char ch = 'A'; // char is used to store a single character
    cout << "Value of ch: " << ch << endl;
    return 0;
}