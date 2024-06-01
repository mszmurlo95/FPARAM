//
//  sphere.cpp
//  Parameterization
//
//  Created by Matt Szmurlo on 5/30/24.
//

#include <iostream>
#include <string.h>
#include "../src/Foo.h"


int main() {
    double radius{};
    
    //create drop down or indication of objects like sphere to show to user
    
    std::cout << "Please enter radius of a sphere: ";
    //have user input radius
    std::cin >> radius;
    
    //create sphere object and make radius 3
    Foo sphere{radius};
    
    //print volume of sphere
    std::cout <<"The sphere volume is: "<< sphere.sphere_volume() << std::endl;
    
    std::cout << "Please enter new radius of a sphere: ";
    std::cin >> radius;
    
    Foo sphere2{radius};
    
    std::cout <<"The sphere volume is: "<< sphere2.sphere_volume() << std::endl;


    return 0;
}

