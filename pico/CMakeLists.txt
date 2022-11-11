#----------- shell command -------------
# excute_process(COMMAND [<args>])
#                WORKING_DIRECTORY <dir>
#                RESULT_VARIABLE <var>
#--------------------------------------
cmake_minimum_required(VERSION 3.13)

#set(CMAKE_VERBOSE_MAKEFILE on)
#set_property(GLOBAL PROPERTY RULE_MESSAGES OFF)

include(~/Project/rasp/pico-sdk/pico_sdk_init.cmake)

project(Main C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE}")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE}")
set(CMAKE_EXPORT_COMPILE_COMMANDS on)

pico_sdk_init()

#add_executable(0x02_hello_world src/0x02_hello_world.c)
#add_executable(0x03_char src/0x03_char.c)
#add_executable(0x06_double src/0x06_double.c)

add_subdirectory(src/sdk/dron)
add_executable(${PROJECT_NAME}
    src/sdk/dron.c)

pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 0)
pico_add_extra_outputs(${PROJECT_NAME})
target_link_libraries(${PROJECT_NAME} dron pico_stdlib hardware_i2c)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include)

# cmake -LAH
get_cmake_property(result VARIABLES)
foreach (i ${result})
    message(${i})
endforeach()

# flash: $(PROJECT_NAME)
#       cp $<.uf2 /Volumes/RPI-RP2
add_custom_target(flash
                    COMMAND cp ${PROJECT_NAME}.uf2 /Volumes/RPI-RP2/
                    DEPENDS ${PROJECT_NAME})

                execute_process(COMMAND sh -c "ls | sed -En 's/(Main)(.*)/DRON\\2/p'"
                WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
                OUTPUT_VARIABLE out)

message("ls : ${out}")
