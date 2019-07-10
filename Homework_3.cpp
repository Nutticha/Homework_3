#include<iostream>
using namespace std;
int main()
{
	int num1;
	cout << "Enter your number grade : ";
	cin  >> num1;
	cout << endl;
	cout << "======== YOUR - GRADE ========" << endl;
	 if(num1 >= 90 && num1 <= 100)
	 {
		 cout << " A "  <<endl;
	 }
	 else if(num1 >= 80 && num1 <= 89)
	 {
		 cout << " B "  <<endl;
	 }
	 else if(num1 >= 70 && num1 <= 79)
	 {
		 cout << " C "  << endl;
	 }
	 else if(num1 >= 60 && num1 <= 69)
	 {
		 cout << " D "  <<endl;
	 }
	 else if(num1 >= 0  && num1 <=59)
	 {
		 cout << " F " <<  endl;
	 }
	 else
	 {
		 cout << "error" << endl;
	 }
	 
	 cout << "==============================" << endl;
	 return 0;
}