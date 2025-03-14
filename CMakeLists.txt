cmake_minimum_required(VERSION 3.10)
# 在此处定义项目名称
set(PROJECT_NAME demo)
project(${PROJECT_NAME} VERSION 1.0)

# 公共编译选项
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# 添加源文件
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/main.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/utils.c
    # 其他源文件
)

# 包含头文件目录
include_directories(
    ${CMAKE_SOURCE_DIR}/include
    # 其他头文件目录
)

# 添加可执行文件（需要在设置输出目录之后）
add_executable(${PROJECT_NAME} ${SOURCES})
