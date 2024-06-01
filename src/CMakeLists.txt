# Setup target for testing
add_library(Foo Foo.cpp)

# Target Directories
target_include_directories(Foo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})