cmake_minimum_required(VERSION 3.12)
project(mpi-hello-world)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -Werror")

find_package(MPI REQUIRED)
include_directories(${MPI_INCLUDE_PATH})

SET(CMAKE_C_COMPILER mpicc)
SET(CMAKE_CXX_COMPILER mpicxx)

set(SOURCE_FILES hello.cpp)
add_executable(${CMAKE_PROJECT_NAME} ${SOURCE_FILES})