#include<iostream>
#include"constants.h"

using std::cout; using std::cin;

int main()
{
    auto radius = .01;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    
    cout<<"Area of the circle is: "<<get_area_of_circle(radius);
    
    return 0;
}