cmake_minimum_required(VERSION 3.21)
project(PointerSet)

set(CMAKE_CXX_STANDARD 14)

FILE(GLOB TEST_FILES
        "Tests*.cpp")

FILE(GLOB SRCFILES
        "./include/*.h")

FILE(GLOB SUPERSRCFILES
        "./../include/*.h"
        "./../../Lists/pointer_implementation/Pointer List/src/*.tpp"
        "./../../Lists/pointer_implementation/Pointer List/include/*.h"
)
add_executable(PointerSet
        ${TEST_FILES}
        ${SRCFILES}
        ${SUPERSRCFILES}
        )
