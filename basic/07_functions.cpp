#include <iostream>
using namespace std;
/*
Functions are a set of code which performs something for u
Functions are used to modularize code
Functions are used to increase readability
Functions are used to reduce code duplication

Types of functions
1. void: does not return anything
2. return
3. parameterized
4. non-parameterized
*/

// void function
void hello(){
    cout<<"Hello World"<<endl;
}

// void function with parameter
void helloName(string name){
    cout << "Hello " << name << endl;
}

// take 2 no. and print sum
int sum(int a, int b){
    int c = a + b;
    return c;
}

// return max
int maxx(int a, int b){
    if(a>=b) return a;
    return b;
}

// pass by value: a copy of the actual parameter is passed to the function
void value(int a){
    cout << a <<endl;
    a +=5;
    cout << a <<endl;
    a +=5;
    cout << a <<endl;
}

// pass by reference: the actual parameter is passed to the function
void reference(int &a){
    cout << a <<endl;
    a +=5;
    cout << a <<endl;
    a +=5;
    cout << a <<endl;
}
// if we pass an array to a function, it is always passed by reference
void arrayx(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    hello();
    helloName("Simran");
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << sum(num1, num2) <<endl;
    cout << "Max: " << maxx(num1, num2) <<endl;
    
    value(num1);
    cout << "Value of num1 after function call: " << num1 <<endl;
    reference(num2);
    cout << "Value of num2 after function call: " << num2 <<endl;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrayx(arr, n);
    return 0;
}