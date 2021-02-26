//Write the include statement for decisions.h here

#include<iostream>
#include"decision.h"

using std::cin; using std::cout;

//Write namespace using statements for cout and cin

int main() 
{
	int grade;
	cout<<"Enter the grade number from 0 to 100 ";
	cin>>grade;

	cout<<get_letter_grade_using_if(grade);
	cout<<get_letter_grade_using_switch(grade);

	return 0;
}

