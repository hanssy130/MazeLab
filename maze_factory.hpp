//
// Created by Justin and Dylan on 11/19/2020.
//

#ifndef LAB9_MAZE_FACTORY_HPP
#define LAB9_MAZE_FACTORY_HPP

#include "maze.hpp"

using namespace std;

class maze_factory {
public:
    virtual maze* make_maze() = 0;
    virtual wall* make_wall() = 0;
    virtual room* make_room(int id, wall* wall) = 0;
    virtual door* make_door(room* firstRoom, room* secondRoom) = 0;
};

class faery_maze_factory : public maze_factory {
public:
    maze* make_maze() override;
    wall* make_wall() override;
    room* make_room(int id, wall* wall) override;
    door* make_door(room* firstRoom, room* secondRoom) override;
};

class dysto_maze_factory : public maze_factory {
public:
    maze* make_maze() override;
    wall* make_wall() override;
    room* make_room(int id, wall* wall) override;
    door* make_door(room* firstRoom, room* secondRoom) override;
};


#endif //LAB9_MAZE_FACTORY_HPP
