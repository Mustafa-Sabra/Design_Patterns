cmake_minimum_required(VERSION 3.10) # Minimum CMake version
project(ObserverPattern_RawPointers LANGUAGES CXX)

# Set the C++ standard (adjust as needed for your compiler)
set(CMAKE_CXX_STANDARD 17) # Changed to C++17 as C++20 might not be strictly needed for raw pointers
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) # Disable GNU extensions by default

# Add the 'src' directory to include paths so headers can be found
include_directories(src)

# Define the source files for your executable
set(PROJECT_SOURCES
    src/main.cpp
    src/Weatherstation.cpp
    src/Display.cpp
)

# Create the executable target
add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})