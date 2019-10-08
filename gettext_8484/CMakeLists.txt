cmake_minimum_required(VERSION 3.12)
project(test)


find_path(Intl_INCLUDE_DIR NAMES "libintl.h")
find_library(Intl_LIBRARY NAMES "intl" "libintl")

add_executable(test test.cpp)

target_include_directories(test PUBLIC ${Intl_INCLUDE_DIR})
target_link_libraries(test PUBLIC ${Intl_LIBRARY})
