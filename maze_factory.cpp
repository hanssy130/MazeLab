//
// Created by Justin and Hans on 11/19/2020.
//

#include "maze_factory.hpp"


maze *faery_maze_factory::make_maze() {
    return new faery_maze();
}

wall *faery_maze_factory::make_wall() {
    return new faery_wall();
}

room *faery_maze_factory::make_room(int id, wall* wall) {
    return new faery_room(id, wall);
}

door *faery_maze_factory::make_door(room* firstRoom, room* secondRoom) {
    return new faery_door(firstRoom, secondRoom);
}

maze *dysto_maze_factory::make_maze() {
    return new dysto_maze;
}

wall *dysto_maze_factory::make_wall() {
    return new dysto_wall();
}

room *dysto_maze_factory::make_room(int id, wall* wall) {
    return new dysto_room(id, wall);
}

door *dysto_maze_factory::make_door(room* firstRoom, room* secondRoom) {
    return new dysto_door(firstRoom, secondRoom);
}



