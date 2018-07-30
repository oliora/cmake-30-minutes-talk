cmake_minimum_required(VERSION 3.5)

project(Uno LANGUAGES CXX VERSION 1.0)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 14)

include(GNUInstallDirs)

find_package(Boost 1.65 REQUIRED)

enable_testing()

# Define executable target uno
add_executable(uno uno.cpp)
target_link_libraries(uno PRIVATE Boost::boost)
install(TARGETS uno RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
