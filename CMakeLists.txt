cmake_minimum_required(VERSION 3.5.0)
project(Gradebook-2021-06 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(Gradebook-2021-06 Grade.cpp Grade.h Gradebook.cpp Gradebook.h main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

