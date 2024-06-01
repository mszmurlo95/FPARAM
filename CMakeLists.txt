cmake_minimum_required(VERSION 3.20)

project(MyProject VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add custom cmake modules path
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

# Enable testing
enable_testing()

# Add subdirectories
add_subdirectory(src)
add_subdirectory(tests)


