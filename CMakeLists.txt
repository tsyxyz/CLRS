cmake_minimum_required(VERSION 3.10.2)
project(CLRS)

macro(SUBDIRLIST result curdir filter)
  file(GLOB children ${curdir}/${filter})
  set(dirlist "")
  foreach(child ${children})
    if(IS_DIRECTORY ${child})
      list(APPEND dirlist ${child})
    endif()
  endforeach()
  set(${result} ${dirlist})
endmacro()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")
set(CMAKE_CXX_FLAGS "-Wall -Werror")
set(CMAKE_CXX_STANDARD 11)

SUBDIRLIST(SUBDIRS ${CMAKE_CURRENT_SOURCE_DIR} ch*)
foreach(subdir ${SUBDIRS})
    if(IS_DIRECTORY ${subdir}/include)
        include_directories(${subdir}/include)
    endif()
endforeach()

set(CLRS_SOURCES "")
set(CLRS_TESTS "")
foreach(subdir ${SUBDIRS})
    if(EXISTS ${subdir}/src)
        file(GLOB SRCS ${subdir}/src/*.cpp)
        list(APPEND CLRS_SOURCES ${SRCS})
    endif()
    if(EXISTS ${subdir}/test)
        file(GLOB TESTS ${subdir}/test/*.cpp)
        list(APPEND CLRS_TESTS ${TESTS})
    endif()
endforeach()

set(CLRS_LIB clrs)
set(CLRS_BIN clrs_bin)

add_library(${CLRS_LIB} SHARED ${CLRS_SOURCES})

add_executable(${CLRS_BIN} main.cpp ${CLRS_TESTS})
target_link_libraries(${CLRS_BIN}
    ${CLRS_LIB}
    GTest::GTest)