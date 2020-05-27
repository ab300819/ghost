cmake_minimum_required(VERSION 3.5.1)
project(concurrency CXX)

set(CMAKE_CXX_STANDARD 17)

message(STATUS ${CMAKE_SYSTEM_NAME})
if (CMAKE_SYSTEM_NAME MATCHES "Linux")
    set(APUE /home/think/project/apue)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
elseif (CMAKE_SYSTEM_NAME MATCHES "Darwin")
    set(APUE /Users/mengshen/Project/apue)
endif ()


#include_directories(${APUE}/include)
include_directories(./)

#FIND_LIBRARY(COMM_LIB comm ../../thirdparty/comm/lib NO_DEFAULT_PATH)
#FIND_LIBRARY(RUNTIME_LIB rt /usr/lib  /usr/local/lib NO_DEFAULT_PATH)
#
#link_libraries(${COMM_LIB} ${RUNTIME_LIB})
#
#add_library(lib_demo
#        cmd.cpp
#        global.cpp
#        md5.cpp
#        )
#
#link_libraries(lib_demo)
#
#target_link_libraries(1-3-ls apue)
add_executable(main main.cpp TestClass.cpp TestClass.h)