//
// Created by Justin and Hans on 11/19/2020.
//

#include <iostream>
#include "room.hpp"

using namespace std;

room::room(int id, wall* wall) {
    this->id = id;
    addWall(wall);
}

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

void faery_room::print() {
    cout << "Faery Room " << getId() << ": This room has faeries in it" << endl;
}

void dysto_room::print() {
    cout << "Dystopian Room " << getId() << ": This room has communist pigs in it" << endl;
}
