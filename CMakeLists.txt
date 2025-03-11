cmake_minimum_required(VERSION 3.10)

# 设置项目名称和版本
# 从CMake变量获取项目名称
if(NOT DEFINED PROJECT_NAME)
    set(PROJECT_NAME "demo")
endif()
project(${PROJECT_NAME} VERSION 1.0)

# 指定C标准
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 设置输出目录 - 简化为单一配置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# 添加可执行文件（需要在设置输出目录之后）
add_executable(${PROJECT_NAME} main.c)

# 添加配置文件复制
configure_file(${CMAKE_SOURCE_DIR}/config.json
             ${CMAKE_BINARY_DIR}/bin/config.json
             COPYONLY)