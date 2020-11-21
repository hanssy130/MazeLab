//
// Created by Justin and Hans on 11/19/2020.
//

#ifndef LAB9_WALL_HPP
#define LAB9_WALL_HPP

using namespace std;

class wall {
public:
    virtual void print() = 0;
};

class faery_wall : public wall {
    void print() override;
};

class dysto_wall : public wall {
    void print() override;
};

#endif //LAB9_WALL_HPP
