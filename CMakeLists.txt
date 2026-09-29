cmake_minimum_required(VERSION 4.4.3)

project(CppRenderingProject 
    
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main)
add_library(library)

target_sources(main
    PRIVATE
        main.cpp
)

target_sources(library
    PRIVATE
        library_implementation.cpp
    PUBLIC
        FILE_SET headers
        TYPE HEADERS
        BASE_DIRS
            include
        FILES
            include/library_header.h
)

target_link_libraries(main PRIVATE library)