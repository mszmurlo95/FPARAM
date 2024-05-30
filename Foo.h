//
//  Foo.h
//  Parameterization
//
//  Created by Matt Szmurlo on 5/30/24.
//

#ifndef Foo_h
#define Foo_h

#include <stdio.h>


class Foo
{
private:
    double _radius{};
    const double _pi = 3.14159265358979323846;
    
public:
    //constructor
    Foo(double _radius);
    
    //method declaration
    double sphere_volume();
    

};

#endif /* foo_hpp */
