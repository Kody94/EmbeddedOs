cmake_minimum_required(VERSION 3.27)

set(HEADER_LIST "../include/EmbeddedOs/foo.hpp")

add_library(EmbeddedOs_library foo.cpp ${HEADER_LIST})

target_include_directories(EmbeddedOs_library PUBLIC ../include)

target_compile_features(EmbeddedOs_library PUBLIC cxx_std_11)

source_group(TREE "${PROJECT_SOURCE_DIR}/include" PREFIX "Header Files" FILES ${HEADER_LIST})