#include "question3.h"
#include<string>

using std::string;


bool test_config()
{
    return true;
}

int binary_to_decimal(string str)
{
    
    int binaryNumber =  stoi(str);
    int decimalNumber = 0;
    int base = 1;
    int temp = binaryNumber;


    while (temp) 
    {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        decimalNumber += last_digit * base;
 
        base = base * 2;
    }
    return decimalNumber;


}