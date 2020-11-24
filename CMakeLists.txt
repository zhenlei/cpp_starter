cmake_minimum_required(VERSION 3.9)

project(intro)

add_library(project_options INTERFACE)
target_compile_features(project_options INTERFACE cxx_std_17)

if (MSVC)
	add_compile_options(/W4)
else()
	add_compile_options(-Wall -Wextra -Wpedantic)
endif()

include(cmake/Sanitizers.cmake)
enable_sanitizers(project_options)

add_executable(intro src/main.cpp)

target_link_libraries(intro PRIVATE project_options)
