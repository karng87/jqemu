cmake_minimum_required(VERSION 3.13)

#set(CMAKE_VERBOSE_MAKEFILE on)
#set_property(GLOBAL PROPERTY RULE_MESSAGES OFF)

include(~/Project/rasp/pico-sdk/pico_sdk_init.cmake)

project(dron_project C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE}")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE}")

pico_sdk_init()

#add_executable(0x02_hello_world src/0x02_hello_world.c)
#add_executable(0x03_char src/0x03_char.c)
#add_executable(0x06_double src/0x06_double.c)


add_library(dronlib OBJECT
    src/sdk/dron/input.c
    src/sdk/dron/print.c)
add_executable(dron 
    src/sdk/dron.c)

pico_enable_stdio_usb(dron 1)
pico_enable_stdio_uart(dron 0)
pico_add_extra_outputs(dron)

target_include_directories(dronlib PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(dron PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(dron dronlib pico_stdlib hardware_i2c)

add_custom_target(flash
                    COMMAND cp dron.uf2 /Volumes/RPI-RP2/
                    DEPENDS dron)
