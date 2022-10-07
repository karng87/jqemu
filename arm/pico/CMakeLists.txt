cmake_minimum_required(VERSION 3.13)

include(~/pico/pico-sdk/pico_sdk_init.cmake)
project(led25)
pico_sdk_init()

add_executable(led25
    src/led25.c
    )
add_executable(hello_world
    src/hello_world.c
    )

target_link_libraries(led25 pico_stdlib)
target_link_libraries(hello_world pico_stdlib)

pico_add_extra_outputs(led25)
pico_add_extra_outputs(hello_world)
