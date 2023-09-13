cmake_minimum_required(VERSION 3.14...3.27)

project(EmbeddedOs VERSION 0.1 DESCRIPTION "EmbeddedOs libraries" LANGUAGES CXX)

add_subdirectory(src)
add_subdirectory(extern/json)

target_link_libraries(EmbeddedOs_library nlohmann_json)
