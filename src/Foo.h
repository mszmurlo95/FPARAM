//
//  Foo.h
//  Parameterization
//
//  Created by Matt Szmurlo on 5/30/24.
//

#ifndef Foo_H
#define Foo_H


class Foo
{
private:
    //member variables
    double _radius{};
    const double _pi = 3.14159265358979323846;
    
    //helper functions
    bool isPositive(double);
    double roundToHundreths(double);
    
    
public:
    //constructors
    Foo(double _radius);
    
    //method declarations
    double sphere_volume();

};

#endif /* foo_hpp */

