#include "do_while.h"
#include<iostream>
using std::cout; using std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
    char choice;

    do
    {
       cout<<"Type y or Y to continue...";
       cin>>choice;
    } 
    while (!(choice == 'y' || choice == 'Y'));
    

}

/*
void run_menu()
{
    cout<<"1-Accounting/n";
    cout<<"2-Payroll\n";
    cout<<"3-exit\n";

}
*/