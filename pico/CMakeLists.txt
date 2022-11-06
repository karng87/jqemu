cmake_minimum_required(VERSION 3.13)

#set(CMAKE_VERBOSE_MAKEFILE on)
#set_property(GLOBAL PROPERTY RULE_MESSAGES OFF)

include(~/Project/rasp/pico-sdk/pico_sdk_init.cmake)

project(test_project C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

#add_executable(0x02_hello_world src/0x02_hello_world.c)
#add_executable(0x03_char src/0x03_char.c)
add_executable(led25 src/led25.c)

#pico_enable_stdio_usb(0x02_hello_world 1)
pico_enable_stdio_usb(led25 1)

#pico_add_extra_outputs(0x02_hello_world)
pico_add_extra_outputs(led25)

#target_link_libraries(0x02_hello_world pico_stdlib)
target_link_libraries(led25 pico_stdlib)
