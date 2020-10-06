cmake_minimum_required(VERSION 3.13.0)
project(ghost CXX)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

message(STATUS ${CMAKE_SYSTEM_NAME})
if (CMAKE_SYSTEM_NAME MATCHES "Linux")
    #     set(APUE /home/think/project/apue)
    #     set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
elseif (CMAKE_SYSTEM_NAME MATCHES "Darwin")
    #     set(APUE /Users/mengshen/Project/apue)
    #    set(Qt5_DIR /usr/local/Cellar/qt/5.14.0/lib/cmake/Qt5)
endif ()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

include_directories("${PROJECT_SOURCE_DIR}/src/framework/common")
include_directories("${PROJECT_SOURCE_DIR}/src/framework/interface")

#add_subdirectory("src/framework")
#add_subdirectory("src/empty")


add_library(common
        "src/framework/common/allocator.cpp"
        "src/framework/common/base_application.cpp"
        "src/framework/common/graph_manager.cpp"
        "src/framework/common/main.cpp")

add_executable(main_ui
        "src/widget/main_ui.cpp"
        "src/widget/paint_widget.cpp")
target_link_libraries(main_ui
        Qt5::Widgets
        common)
target_link_libraries(main_ui common)

add_executable(empty "src/empty/empty_application.cpp")
target_link_libraries(empty common)
