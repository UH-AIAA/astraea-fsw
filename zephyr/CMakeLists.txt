# SPDX-License-Identifier: Apache-2.0

# zephyr/CMakeLists.txt
zephyr_syscall_include_directories(../include)
zephyr_include_directories(../include)

add_subdirectory_ifdef(CONFIG_MY_BLINK_DRIVER ../drivers/blink)
# repeat for other drivers...

# add_subdirectory(../lib)  # if lib also contains zephyr_library() calls
