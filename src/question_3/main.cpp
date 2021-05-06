
#include "question3.h"
#include<string>
#include<iostream>
using std::string; 
using std::cout; using std::cin;

int main()
{
string binary;
string string0 = "0";
string string1 = "1";
int decimal;
char choice;


    do 
    {
        cout<<"Please to enter a binary number that is at least 8 digits: ";
        cin>>binary;
        while ((binary.find(string0) || binary.find(string1)) && (binary.size() == 8 ))
            
            {
            decimal = binary_to_decimal(binary);
            cout<<"The decimal value is "<<decimal<<".";
            break;
            }
            
            cout<<"\nWould you like to enter another binary number? Type the letter 'Y' to continue or 'N' to exit: ";
            cin>>choice;
            
            
   
    }
    while (choice == 'y' || choice == 'Y');
    return 0;
}