cmake_minimum_required(VERSION 3.13.0)
project(ghost CXX)

set(CMAKE_CXX_STANDARD 20)

# message(STATUS ${CMAKE_SYSTEM_NAME})
# if (CMAKE_SYSTEM_NAME MATCHES "Linux")
#     set(APUE /home/think/project/apue)
#     set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
# elseif (CMAKE_SYSTEM_NAME MATCHES "Darwin")
#     set(APUE /Users/mengshen/Project/apue)
# endif ()

include_directories("${PROJECT_SOURCE_DIR}/src/framework/common")
include_directories("${PROJECT_SOURCE_DIR}/src/framework/interface")

add_library(common src/framework/common/base_application.cpp src/framework/common/main.cpp)

add_executable(ghost src/test/TestApplication.cpp)
target_link_libraries(ghost common)