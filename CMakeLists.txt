cmake_minimum_required(VERSION 3.10.2)

project(testCMake)

set(BOOST_ROOT "/Users/kaveh/projects/boost_1_77_0")
set(Boost_INCLUDE_DIR "/Users/kaveh/projects/boost_1_77_0")
set(Boost_LIBRARY_DIR "/Users/kaveh/projects/boost_1_77_0")
find_package(Boost 1.76.0)
if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could NOT find boost")
endif()

if(Boost_FOUND)
    message(STATUS "It Works!")
    include_directories(${Boost_INCLUDE_DIR})
    link_directories(${Boost_LIBRARY_DIR})
endif()


add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(Adder)
target_link_directories(${PROJECT_NAME} PRIVATE Adder/)
target_include_directories(${PROJECT_NAME} PUBLIC Adder)
target_link_libraries(${PROJECT_NAME} adder)

target_link_directories(testCMake PUBLIC ${Boost_LIBRARY_DIR})