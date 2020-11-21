//
// Created by Justin and Hans on 11/19/2020.
//

#include <iostream>
#include "door.hpp"

using namespace std;

door::door(room *firstRoom, room *secondRoom) {
    this->firstRoom = firstRoom;
    this->secondRoom = secondRoom;
}

void faery_door::print() {
    cout << "This door has a faery wing for a handle. This door connects Faery Room " <<
    this->firstRoom->getId() << " and Faery Room " << this->secondRoom->getId() << endl;
}

void dysto_door::print() {
    cout << "This door has a soma pill for a handle. This door connects Dystopian Room " <<
         this->firstRoom->getId() << " and Dystopian Room " << this->secondRoom->getId() << endl;
}