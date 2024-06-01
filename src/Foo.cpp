//
//  Foo.cpp
//  Parameterization
//
//  Created by Matt Szmurlo on 5/30/24.
//

#include "Foo.h"
#include <math.h>
#include <stdio.h>



//constructor initilization
Foo::Foo(double radius)
  :_radius{radius}
{
    
}

//helper functions defenitions
bool Foo::isPositive(double value)
{
    if(value <= 0)
        return false;
    else
        return true;
}

double Foo::roundToHundreths(double rawValue)
{
    return ceil(rawValue * 100) / 100;
}

//method definition
double Foo::sphere_volume()
{
    //check if the rad variable is positive. if not, return an invalid specific value of -1
    if(!isPositive(_radius))
    {
        return -1;
    }
    
    double volume{};
    volume = (4 * _pi * pow(_radius, 3.0))/3;
    return roundToHundreths(volume);
}





