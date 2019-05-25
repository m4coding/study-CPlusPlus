cmake_minimum_required(VERSION 3.13)


set(CMAKE_CXX_STANDARD 14)

set(SRC Shape.cpp
        Rectangle.cpp
        PaintCost.cpp
        MoreRectangle.cpp
        main.cpp)

add_executable(test_class ${SRC})