//Author: Dwarikanath Mishra

//Program to find quotient and remainder

#include <iostream>
using namespace std;

int main(){
	
	cout << "Enter the dividend: ";
	int dividend ; cin >> dividend ;
	
	cout << "Enter the divisor: ";
    int divisor; cin >> divisor ;
    
    if(divisor==0){
        cout << "Divisor cannot be zero.Please enter a valid divisor." << endl ;
        return 0;
    }
	
	int quotient = dividend/divisor ;
	cout << "Quotient: " << quotient << endl ;
	
	int remainder = dividend%divisor ;
	cout << "Remainder: " << remainder << endl ;

}
