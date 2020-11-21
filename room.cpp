//
// Created by Justin and Hans on 11/19/2020.
//

#include <iostream>
#include "room.hpp"

using namespace std;

// Room is made up of an id and 4 walls.
room::room(int id, wall* wall) {
    this->id = id;
    addWall(wall);
}

// Adds 4 copies of the same wall to the room.
void room::addWall(wall* wall) {
    for (int i = 1; i <= 4; i++) {
        this->walls.push_back(wall);
    }
}

int room::getId() const {
    return id;
}

const vector<wall*> room::getWalls() const{
    return walls;
}

// Prints a Faery Room.
void faery_room::print() {
    cout << "Faery Room " << getId() << ": This room has faeries in it" << endl;
}

// Prints a Dystopian Room.
void dysto_room::print() {
    cout << "Dystopian Room " << getId() << ": This room has communist pigs in it" << endl;
}
