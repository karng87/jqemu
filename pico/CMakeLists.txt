cmake_minimum_required(VERSION 3.13)

#set(CMAKE_VERBOSE_MAKEFILE on)
#set_property(GLOBAL PROPERTY RULE_MESSAGES OFF)

include(~/Project/rasp/pico-sdk/pico_sdk_init.cmake)
project(led25)
pico_sdk_init()


add_executable(led25 src/led25.c)
target_link_libraries(led25 pico_stdlib)

pico_add_extra_outputs(led25)
