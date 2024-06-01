#include <catch2/catch_all.hpp>
#include "FPARAM.h"
#include <string>

TEST_CASE("Testing sphere_volume computes", "[sphere_volume]")
{

    //Foo objects to test with single argument constructor
    Foo foo1(1);
    Foo foo2(2);
    Foo foo3(3);
   

    Foo foo4(-1);
    Foo foo5(-2);

    Foo foo6(0);

    Foo foo7(1000);

    Foo foo8('H'); //should convert to ASCII value

   //add check to validate handling of NaN
    

    REQUIRE(foo1.sphere_volume() == 4.19);
    REQUIRE(foo2.sphere_volume() == 33.52);
    REQUIRE(foo3.sphere_volume() == 113.1);

    // Ensure negative radii return -1
    REQUIRE(foo4.sphere_volume() == -1);
    REQUIRE(foo5.sphere_volume() == -1);
    REQUIRE(foo6.sphere_volume() == -1);

    REQUIRE(foo7.sphere_volume() == Catch::Approx(4190000000).epsilon(0.01));

    REQUIRE(foo8.sphere_volume() == Catch::Approx(1560000).epsilon(0.01));

    

    
    //test for sphere_volume method
    

}
