//write includes statements
#include "loops.h"
#include <iostream>
//write using statements for cin and cout
using std::cin; using std::cout;
/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	char choice;
	int num = 0;

    do
    {
       cout<<"Please enter a number";
       cin>>num;
	   while(num < 1 || num > 10)
	   {
		   cout<<"Please enter another number";
		   cin>>num;
	   }

	    cout<<factorial(num)<<"\n";
	    cout<<"Type the letter 'Y' to continue";
		cin>>choice;
    } 
    while (choice == 'y' || choice == 'Y');

	return 0;
}