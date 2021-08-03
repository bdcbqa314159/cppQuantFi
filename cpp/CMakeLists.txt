cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(cppQuantFi VERSION 0.1.0)

# Include dir
include_directories(/usr/local/include)

# Src
AUX_SOURCE_DIRECTORY(src SRC_FILES)

# Headers
set(PROJECT_SOURCE_DIR "src")
set(PROJECT_INCLUDE_DIR "include/cppQuantFi_bits")

# Source files
set(SOURCE_FILES
    ${PROJECT_INCLUDE_DIR}/intro.hpp
    ${PROJECT_INCLUDE_DIR}/vanillaOption.hpp
    ${PROJECT_INCLUDE_DIR}/norm.hpp
    ${PROJECT_INCLUDE_DIR}/payoff.hpp
    ${PROJECT_INCLUDE_DIR}/payoffCall.hpp
    ${PROJECT_INCLUDE_DIR}/payoffPut.hpp
    ${PROJECT_INCLUDE_DIR}/payoffDoubleDigital.hpp
    ${PROJECT_INCLUDE_DIR}/matrix.hpp
    ${PROJECT_INCLUDE_DIR}/functors.hpp
    
    ${PROJECT_SOURCE_DIR}/intro.cpp
    ${PROJECT_SOURCE_DIR}/vanillaOption.cpp
    ${PROJECT_SOURCE_DIR}/norm.cpp
    ${PROJECT_SOURCE_DIR}/payoffCall.cpp
    ${PROJECT_SOURCE_DIR}/payoffPut.cpp
    ${PROJECT_SOURCE_DIR}/payoffDoubleDigital.cpp
    
)

# Set up such that XCode organizes the files correctly
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCE_FILES})

# Add library
add_library(cppQuantFi SHARED ${SOURCE_FILES})

# Include directories
target_include_directories(cppQuantFi PRIVATE include/cppQuantFi_bits)

# Install
install(TARGETS cppQuantFi DESTINATION lib)

# Install the headers
install(FILES include/cppQuantFi DESTINATION include)

# Create base directory
install(DIRECTORY include/cppQuantFi_bits DESTINATION include)
