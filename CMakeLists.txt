
cmake_minimum_required(VERSION 3.10)

# 顶层项目名称
project(VSCODE)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# 添加子目录，CMake 会在这些目录中寻找各自的 CMakeLists.txt
add_subdirectory(HelloOO)
add_subdirectory(HelloOOMember)
add_subdirectory(test)
add_subdirectory(HelloOODerive)
add_subdirectory(HelloSTLVector)