cmake_minimum_required(VERSION 3.13.0)
project(ghost CXX)
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

message(STATUS ${CMAKE_SYSTEM_NAME})
if (CMAKE_SYSTEM_NAME MATCHES "Linux")
    #     set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
elseif (CMAKE_SYSTEM_NAME MATCHES "Darwin")

elseif (CMAKE_SYSTEM_NAME MATCHES "Windows")

endif ()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

include_directories("${PROJECT_SOURCE_DIR}/src/framework/common"
        "${PROJECT_SOURCE_DIR}/src/framework/interface")

add_subdirectory("src/framework")
add_subdirectory("src/empty")

aux_source_directory(./src/widget WIDGET)
add_executable(main_ui ${WIDGET})
target_link_libraries(main_ui
        Qt5::Widgets
        common)
