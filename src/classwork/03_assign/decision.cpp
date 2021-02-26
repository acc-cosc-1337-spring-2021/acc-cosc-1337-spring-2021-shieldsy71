#include"decision.h"
#include<iostream>
#include<string>



//cpp
std::string get_letter_grade_using_if(int grade)
{
    std::string letter;

    if(grade >= 90)
    {
        letter = "A";
    }

    else if (grade >= 80)
    {
        letter = "B";
    }
    else if  (grade >= 70)
    {
        letter = "C";
    }
    else if  (grade >= 60)
    {
        letter = "D";
    }
     else if  (grade >= 0)
    {
        letter = "F";
    }
    else
    {
        letter = "Invalid grade";
    }

    return letter;
}

std::string get_letter_grade_using_switch(int grade)

{
    std::string option;

    switch (grade)
    {
        case 90 ... 100:
            option = "A";
            break;
        case 80 ... 89:
            option = "B";
            break;
        case 70 ... 79:
            option = "C";
            break;
        case 60 ... 69:
            option = "D";
            break;
        case 50 ... 59:
            option = "F";
            break;

        default:
            option = "Invalid Option";
            break;
    
    }

    return option; 
}


