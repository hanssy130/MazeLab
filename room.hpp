
//
// Created by Justin and Hans on 11/19/2020.
//

#ifndef LAB9_ROOM_HPP
#define LAB9_ROOM_HPP


#include "wall.hpp"
#include <vector>

using namespace std;

class room {
protected:
    vector<wall*> walls;
protected:
    int id;

public:
    room (int id, wall* wall);
    virtual void print() = 0;
    int getId() const;
    void addWall(wall* wall);
    const vector<wall*> getWalls() const;


};

class faery_room : public room {
public:
    faery_room(int id, wall* wall) : room(id, wall) {};
    void print() override;
};

class dysto_room : public room {
public:
    dysto_room(int id, wall* wall) : room(id, wall) {};
    void print() override;
};


#endif //LAB9_ROOM_HPP
