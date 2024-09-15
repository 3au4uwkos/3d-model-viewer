cmake_minimum_required(VERSION 3.10)
project(OpenGLExample)

set(CMAKE_CXX_STANDARD 11)

set(VCPKG_ROOT “C:/path/to/vcpkg”)
set(CMAKE_TOOLCHAIN_FILE “${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake”)

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(GLFW3 REQUIRED)

add_executable(OpenGLExample main.cpp)

target_link_libraries(OpenGLExample PRIVATE OpenGL::GL GLEW::GLEW glfw)