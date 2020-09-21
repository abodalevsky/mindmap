cmake_minimum_required(VERSION 3.8.2)

# project name
project(mindmap VERSION 1.0)

# set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


if(CMAKE_VERSION VERSION_LESS "3.7.0")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

# Add a compiler flag
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# Make this a GUI application on Windows
if(WIN32)
    # TODO: add path to Qt libraries here
    set(CMAKE_WIN32_EXECUTABLE ON)
else()
    list(APPEND CMAKE_PREFIX_PATH "~/Projects/libs/qt5")
endif()

# include_directories("/Users/abodalevsky/Projects/libs/qt5/qtbase/include")

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(mindmap
   mainwindow.ui
   mainwindow.cpp
   main.cpp
   resources.qrc
)

target_link_libraries(mindmap Qt5::Widgets)
