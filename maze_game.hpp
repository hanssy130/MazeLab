//
// Created by Justin and Hans on 11/19/2020.
//

#ifndef LAB9_MAZE_GAME_HPP
#define LAB9_MAZE_GAME_HPP


#include "maze_factory.hpp"
#include "maze.hpp"

class maze_game {
public:
    maze_game(){};
    maze* create_maze(maze_factory* mazeFactory);
};


#endif //LAB9_MAZE_GAME_HPP
