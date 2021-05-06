#include "question2.h"
#include<string>
using std::string;

bool test_config()
{
    return true;
}


string decimal_to_hex(int num)
{
    int remainder;
    string str;
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    
    
    while(num > 0)
        {
            remainder = num % 16;
            str = hex[remainder] + str;
            num = num/16;
        }
   

    return str;
}