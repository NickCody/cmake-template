cmake_minimum_required(VERSION 3.10)

add_compile_options(-Wall)

project(app)

set(SOURCE_DIR "src")
file(GLOB_RECURSE SOURCES "${SOURCE_DIR}/*.cpp" "${SOURCE_DIR}/*.h")

add_executable(app ${SOURCES})
