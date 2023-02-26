cmake_minimum_required(VERSION 3.13)

project(BenchMarks)

set(CMAKE_AUTOMOC ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core)
find_package(benchmark REQUIRED)
file(GLOB SOURCE src/*)
add_executable(${PROJECT_NAME} ${SOURCE})

target_link_libraries(${PROJECT_NAME}
    Qt${QT_VERSION_MAJOR}::Core
    benchmark::benchmark
)
add_subdirectory(submodule)

