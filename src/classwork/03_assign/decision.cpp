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
        case 1:
            option = "A";
            break;
        case 2:
            option = "B";
            break;
        case 3:
            option = "C";
            break;
        case 4:
            option = "D";
            break;
        case 5:
            option = "F";
            break;

        default:
            option = "Invalid Option";
            break;
    
    }


    return option; 
}


