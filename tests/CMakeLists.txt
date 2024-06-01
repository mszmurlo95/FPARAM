# Include Catch 2 dependncies
include(AddCatch2)

# Find and link Catch2 if installed
# find_package(Catch2 REQUIRED)

# These tests can use the Catch2-provided main
add_executable(tests test_Foo.cpp)
target_link_libraries(tests PRIVATE Foo Catch2::Catch2WithMain)

include(CTest)
include(Catch)
set(CATCH_CONFIG_VERBOSE ON) # Enable verbose output
catch_discover_tests(tests)