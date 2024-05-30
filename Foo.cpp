//
//  Foo.cpp
//  Parameterization
//
//  Created by Matt Szmurlo on 5/30/24.
//

#include "Foo.h"
#include <math.h>

//constructor initilization
Foo::Foo(double radius)
  :_radius{radius}{
}

//method definition
double Foo::sphere_volume()
{
    double volume{};
    volume = (4 * _pi * pow(_radius, 3.0))/3;
    return volume;
}

