# Copyright (c) 2021 Nordic Semiconductor ASA
# SPDX-License-Identifier: Apache-2.0
#
# This CMake file is picked by the Zephyr build system because it is defined
# as the module CMake entry point (see zephyr/module.yml).

# set min version
cmake_minimum_required(VERSION 4.4)

# Set board to DEV board for now
# NOTE: this will need to be updated
# set(BOARD esp32s3_devkitc)
set(CONF_FILE "prj.conf")

# TODO: set devicetree overlay depending on board
# see: https://docs.zephyrproject.org/latest/build/dts/howtos.html#set-devicetree-overlays

# project name
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(scr-astraea)

# This is needed so that custom driver classes using system calls are taken into
# account
zephyr_syscall_include_directories(include)

zephyr_include_directories(include)

add_subdirectory(drivers)
add_subdirectory(lib)

# set app source files
target_sources(app PRIVATE src/main.c)
