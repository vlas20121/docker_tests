cmake_minimum_required(VERSION 2.8) # Проверка версии CMake.
project(Main)
FIND_PACKAGE( Boost COMPONENTS program_options REQUIRED )
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )
add_executable(Main Main.cpp)
TARGET_LINK_LIBRARIES( Main LINK_PUBLIC ${Boost_LIBRARIES} )
