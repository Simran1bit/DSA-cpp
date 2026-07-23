#include <iostream>
using namespace std;
int main(){

    // ---if else---
    // WAP that takes input of age 
    // and prints adult or not.
    cout << "Enter your age: ";
    int age;
    cin >> age;
    if (age >=18){
        cout << "You are an Adult." << endl;
    }
    else{
        cout << "You are not an Adult." << endl;
    }

    // ---if else if---
    /*
    A school has following rules for grading system:
    a. Below 25 - F
    b. 25 to 44 - E
    c. 45 to 49 - D
    d. 50 to 59 - C
    e. 60 to 79 - B
    f. 80 to 100 - A
    Ask user to enter marks and print the corresponding grade.
    */
    cout << "Enter your marks: ";
    int marks;
    cin >> marks;
    cout << "Grade: ";
    if (marks<25){
        cout << "F" << endl;
    }
    else if (marks<=44){
//  if (marks >=25 && marks<=44) 
        cout << "E" << endl;
    }
    else if (marks<=49){
        cout << "D" << endl;
    }
    else if (marks<=59){
        cout << "C" << endl;
    }
    else if(marks<=79){
        cout << "B" << endl;
    }
    else if (marks <=100){
        cout << "A" << endl;
    }
    else {
        cout << "Enter valid marks." << endl;
    }
    /*we should use else if instead of if for all conditions after first if 
    because if we use if for all conditions then it will check all the conditions even if one condition is true. 
    But if we use else if then it will check the next condition only if the previous condition is false. 
    So, it will save time and resources.*/

    // ---nested if---
    /*
    Take age from the user and then decide accordingly
    1. if age < 18 not eligible for job
    2. if age>=18 eligible for job
    3. if age>=55 and <=57 eligible for job but retirement soon
    4. if age>57 retirement time
    */
   
    if (age<18){
        cout << "not eligible for job";
    }
    else if(age <= 57){
        cout << "eligible for job";
        if(age>=55){
            cout << ", but retirement soon";
        }
    }
    else{
        cout << "Retirement Time";
    }
   
    return 0;
}
