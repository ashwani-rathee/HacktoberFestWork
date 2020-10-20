// Author= Aryan Rathee
//To add two numbers cpp
#include <iostream>
//Try running it
using namespace std;

void calculator(){
    int a,b;
    cout<<"Enter first integer "<<endl;
    cin>>a;
    cout<<"Enter second integer "<<endl;
    cin>>b;
    cout<<"The sum of given numbers is "<<a+b<<endl;
    cout<<"The subtraction of given numbers is "<<a-b<<endl;
    cout<<"The multiplication of given numbers is "<<a*b<<endl;
    cout<<"The division of given numbers is "<<a/b<<endl;
}

int main()
{
    /*int firstNumber, secondNumber, sumOfTwoNumbers;
    
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    // Prints sum 
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     
*/
calculator();
    return 0;
}
