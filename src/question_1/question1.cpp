#include "question1.h"

bool test_config()
{
    return true;
}

double get_sales_commission(double sales)

{
int bonus = 0;

    if (sales < 0)
    {
        bonus = sales;
    }
    else if (sales >= 0 && sales < 500)
    {
        bonus = sales * 0.05;
    }
    else if (sales >= 500 && sales < 1000)
    {
        bonus = sales * 0.06;
    }
    else if (sales >= 1000 && sales < 1500)
    {
        bonus = sales * 0.07;
    }
    else if (sales >= 1500)
    {
        bonus = sales * 0.08;
    }
    
    
    return bonus;
        
}