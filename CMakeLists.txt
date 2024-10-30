cmake_minimum_required(VERSION 3.28)
project(Algorithmie C)

set(CMAKE_C_STANDARD 23)
add_compile_options(/W4 /WX)

add_executable(Algorithmie main.c tp0/helper_base_tp0.c)

target_include_directories(Algorithmie PRIVATE tp0)
