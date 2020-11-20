cmake_minimum_required(VERSION 3.15)
project(lab9)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab9 driver.cpp maze_factory.cpp maze_factory.hpp maze_game.cpp maze_game.hpp maze.cpp maze.hpp door.cpp door.hpp room.cpp room.hpp wall.cpp wall.hpp)