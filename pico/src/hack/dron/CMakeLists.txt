
add_library(dron OBJECT
    input.c
    print.c)
target_include_directories(dron PRIVATE ${CMAKE_SOURCE_DIR}/include)
