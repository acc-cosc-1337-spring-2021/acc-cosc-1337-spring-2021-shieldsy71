//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>



int main() 
{
	int num{};
	std::cout<<"Enter a number";
	std::cin>>num;
	
	int result{};
	result = multiply_numbers(num);
	std::cout <<"The result is "<< result;

	int num1 = 4;
	result = multiply_numbers(num1);
	std::cout << "The new result is " << result;

	return 0;
}

