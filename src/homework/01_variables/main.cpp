//write include statements
#include"variables.h"
#include<iostream>

using std::cout; using std::cin;

//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;

	cout<<"Enter the meal amount";
	cin>>meal_amount;

	
	tax_amount =  get_sales_tax_amount(meal_amount);
	
	

	cout<<"Enter the tip amount";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);
	

	

	double total = tip_amount + tax_amount + meal_amount;

	cout<<"Meal amount:	"<<meal_amount;
	cout<<"Sales Tax:	"<<tax_amount;
	cout<<"Tip Amount:	"<<tip_amount;
	cout<<"Total:	"<<total;


}
