cmake_minimum_required(VERSION 3.9)
project(qt_demo)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Core REQUIRED)
message(STATUS "Qt5Core = ${Qt5Core_DIR}.")
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5OpenGL REQUIRED)

include_directories(include/ ${OPENGL_INCLUDE_DIRS})

set(CH1_SRC_LIST src/ch1/main.cc src/ch1/singleton.cc src/ch1/microscope.cc)
add_executable(single_ton ${CH1_SRC_LIST})

target_link_libraries(single_ton ${OPENGL_LIBRARIES} ${VTK_LIBRARIES}
                      ${Qt5Widgets_LIBRARIES} ${Qt5OpenGL_LIBRARIES})

# if define Q_OBJECT macro, must add header file in src
set(CH2_SRC_LIST
    src/ch2/main.cc include/ch2/test_widget.h src/ch2/test_widget.cc
    include/ch2/my_widget.h src/ch2/my_widget.cc)
add_executable(test_widget ${CH2_SRC_LIST})

target_link_libraries(test_widget ${OPENGL_LIBRARIES} ${VTK_LIBRARIES}
                      ${Qt5Widgets_LIBRARIES} ${Qt5OpenGL_LIBRARIES})
