// basic recursion
#include <iostream>
using namespace std;

// print a string n times
void printNtimes(string x, int n){
    if(n==0){
        return;
    }
    cout << x << endl;
    printNtimes(x,n-1);
}

// print a name n times
void nameNtimes(string x, int n){
    if(n==0){
        return;
    }
    cout << x << endl;
    nameNtimes(x,n-1);
}

int main(){
    cout << "Enter a string: ";
    string s;
    getline(cin,s);
    cout << "Enter number of times u want to print: ";
    int n;
    cin >> n;
    if(n<0){
        cout << "Please enter a positive number" << endl;
        return 0;
    }
    printNtimes(s,n);

    cout << "Enter a name: ";
    string name;
    cin >> name;
    cout << "Enter number of times u want to print: ";
    cin >> n;
    if(n<0){
        cout << "Please enter a positive number" << endl;
        return 0;
    }
    nameNtimes(name,n);

    return 0;
}