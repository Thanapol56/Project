cmake_minimum_required(VERSION 2.8)
SET(CMAKE_CXX_FLAGS "-std=c++0x")
project( CheckColorRGB )
find_package( OpenCV REQUIRED )
add_executable( CheckColorRGB CheckColorRGB.cpp )
target_link_libraries( CheckColorRGB ${OpenCV_LIBS} )
