cmake_minimum_required(VERSION 3.22)

project(
    CppCompGeom
    VERSION 0.0.1
    LANGUAGES C CXX)

# Get Google Test
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest
    GIT_TAG release-1.12.0)
FetchContent_GetProperties(googletest)
#googletest_POPULATED
#googletest_SOURCE_DIR
#googletest_BUILD_DIR
if (NOT googletest_POPULATED)
    FetchContent_Populate(googletest)
    add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BUILD_DIR}
    )
endif()


add_library(CppCompGeomLibrary STATIC
    src/point.cpp
    #src/line.cpp
    #src/segment.cpp
    #src/polygon.cpp
    #src/convexhull.cpp
    #src/intersection.cpp
    )

add_executable(mainApp src/Main.cpp)

target_link_libraries(mainApp CppCompGeomLibrary)

add_executable(testRunner test/test.cpp)
target_link_libraries(testRunner CppCompGeomLibrary gtest_main gmock_main)
