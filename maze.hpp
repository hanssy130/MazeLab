//
// Created by Justin and Hans on 11/19/2020.
//

#ifndef LAB9_MAZE_HPP
#define LAB9_MAZE_HPP

#include <vector>
#include "door.hpp"
#include "wall.hpp"
#include "room.hpp"

using namespace std;

class maze {
protected:
    vector<door*> mazeDoor;
    vector<room*> mazeRooms;

public:
    virtual void print() = 0;

    void addDoor(door* door);
    void addRoom(room* room);
};

class faery_maze : public maze {
    void print() override;
};

class dysto_maze : public maze {
    void print() override;
};

#endif //LAB9_MAZE_HPP
