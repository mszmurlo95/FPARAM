//
//  main.cpp
//  Parameterization
//
//  Created by Matt Szmurlo on 5/30/24.
//

#include <iostream>
#include <string.h>
#include "Foo.h"


int main() {
    double radius{};
    
    std::cout << "Please enter radius of a sphere: ";
    //have user input radius
    std::cin >> radius;
    
    //create sphere object
    Foo sphere{radius};
    
    //print volume of sphere
    std::cout <<"The sphere volume is: "<< sphere.sphere_volume() << std::endl;
    
    return 0;
}
