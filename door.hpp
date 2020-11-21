//
// Created by Justin and Hans on 11/19/2020.
//

#ifndef LAB9_DOOR_HPP
#define LAB9_DOOR_HPP

#include "room.hpp"

using namespace std;

class door {
protected:
    room* firstRoom;
    room* secondRoom;
public:
    door(room* firstRoom, room* secondRoom);
    virtual void print() = 0;
};

class faery_door : public door {
public:
    faery_door(room* firstRoom, room* secondRoom) : door(firstRoom, secondRoom) {};
    void print() override;
};

class dysto_door : public door {
public:
    dysto_door(room* firstRoom, room* secondRoom) : door(firstRoom, secondRoom) {};
    void print() override;
};


#endif //LAB9_DOOR_HPP
