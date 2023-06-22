cmake_minimum_required(VERSION 2.8)
project( ABC )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( ABC abc.cpp )
target_link_libraries( ABC ${OpenCV_LIBS} )

// The project name is 'ABC', executable is also 'ABC', and 'abc.cpp' is the source C++ file
