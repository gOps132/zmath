cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 17)
project(zmath
    VERSION 1.0
    DESCRIPTION "Testing different math formulas"
    LANGUAGES CXX
)

set(ZMATH_SOURCES
    src/main.cpp
)

add_executable(zmath ${ZMATH_SOURCES})

set(ZMATH_OUTPUT_BIN_DIR "${CMAKE_SOURCE_DIR}/bin/${PROJECT_NAME}")
set_target_properties(zmath PROPERTIES
    LINKER_LANGUAGE CXX

    SOVERSION   ${PROJECT_VERSION_MAJOR}
    VERSION     ${PROJECT_VERSION}

    RUNTIME_OUTPUT_DIRECTORY "${ZMATH_OUTPUT_BIN_DIR}/${PROJECT_NAME}-${CMAKE_BUILD_TYPE}"
)


target_precompile_headers(zmath
    PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src/zmath_pch.h"
) 

target_link_libraries(zmath
    PRIVATE -lstdc++
)