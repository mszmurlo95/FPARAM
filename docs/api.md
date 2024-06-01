FPARAM Library

Foo class
---------

### Foo Constructor

**Description:**
Foo is the base class for all Foo functions.

**Syntax:**

Foo foo(radius)

**Parameters:**

radius: double(default 0). Used to set radius.
        


### foo.sphere_volume()

**Description**

gets volume of sphere

**Syntax:**

foo.sphere_volume()

**Parameters:**

none

**Returns:**

- double sphere_volume() will return the volume of a sphere given the radius.
- double sphere_volume() will return -1 for radius values that should be positive.




Example:
--------

```
#include <iostream>
#include <string.h>
#include <FPARAM.h>

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


    $return 0;
}
```