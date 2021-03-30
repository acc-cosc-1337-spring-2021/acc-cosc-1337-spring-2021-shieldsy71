//write include statements
#include "dna.h"
#include<iostream>
#include<string>
//write using statements
using std::cout; using std::cin; using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
 int choice; 
 string dna_string;
 char go;
 

do
{
	cout<<"Enter 1 to Get GC Content, or 2 for Get DNA Complement: ";
	cin>>choice;
	cout<<"Enter the DNA string: ";
	cin>>dna_string;

	if (choice == 1)
	{
		cout<<"The GC percentage is: "<<get_gc_content(dna_string);
	} 
	if (choice == 2)
	{
		cout<<"The DNA complement is: "<<get_dna_complement(dna_string);
	}
cout<<"\nWould you like to use the program again? Type the letter 'Y' to continue or 'N' to exit: ";
cin>>go;
}

while (go == 'y' || go == 'Y');

	return 0;
}