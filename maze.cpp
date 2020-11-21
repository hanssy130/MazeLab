//
// Created by Justin and Hans on 11/19/2020.
//

#include "maze.hpp"
#include "iostream"

using namespace std;

void maze::addDoor(door *door) {
    this->mazeDoor.push_back(door);
}

void maze::addRoom(room *room) {
    this->mazeRooms.push_back(room);
}

void faery_maze::print() {
    cout << "A pretty, magical faery maze" << endl;

    for(room* room :  this->mazeRooms) {
        room->print();

        vector<wall*> roomWalls = room->getWalls();
        for (wall* wall: roomWalls) {
            wall->print();
        }
    }

    for(door* door : this->mazeDoor) {
        door->print();
    }
}

void dysto_maze::print() {
    cout << "An Orwellian dystopian maze" << endl;

    for(room* room :  this->mazeRooms) {
        room->print();

        vector<wall*> roomWalls = room->getWalls();
        for (wall* wall: roomWalls) {
            wall->print();
        }
    }

    for(door* door : this->mazeDoor) {
        door->print();
    }
}
