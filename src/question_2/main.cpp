#include "question2.h"
#include<string>
#include<iostream>
using std::string; 
using std::cout; using std::cin;


int main()
{

int number;
char choice;
string hexNum;

    
do
{

    cout<<"Please enter a decimal number: ";
    cin>>number;

    while (number > 0 && number < 513)
    {
        hexNum = decimal_to_hex(number);
        cout<<"The hex value is "<<hexNum<<".";
        break;
    }

    cout<<"\nWould you like to see another hex value? Type the letter 'Y' to continue or 'N' to exit: ";
    cin>>choice;

}
while (choice == 'y' || choice == 'Y');

return 0;
}