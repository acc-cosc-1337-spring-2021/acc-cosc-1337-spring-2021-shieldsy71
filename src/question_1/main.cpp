#include "question1.h"
#include <iostream>

using std::cout; using std::cin;
using std::string;



int main()
{

double salesAmount = 0;
char choice;

 cout<<"Would you like to see your bonus amount? Type the letter 'Y' to continue: y";
 cin>>choice;
 
 while (choice == 'y' || choice == 'Y')
    {

    cout<<"Please enter a sales amount: ";
    cin>>salesAmount;

    double finalSale = get_sales_commission(salesAmount);

    cout<<"\n";
    cout<<"Sales of "<<salesAmount<<" yields a commission of "<<finalSale<<".";
    cout<<"\n";
    cout<<"Would you like to see your bonus amount? Type the letter 'Y' to continue: ";
    cin>>choice;

    }

while (choice == 'y' || choice == 'Y')


    return 0;
}