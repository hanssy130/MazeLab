#include <iostream>
#include "maze_game.hpp"

int main() {
    maze_game *maze_game = new class maze_game();
    maze_factory *dystoFactory, *faeryFactory;
    maze *dystoMaze, *faeryMaze;

    faeryFactory = new faery_maze_factory;
    dystoFactory = new dysto_maze_factory;

    faeryMaze = maze_game->create_maze(faeryFactory);
    dystoMaze = maze_game->create_maze(dystoFactory);

    faeryMaze->print();
    cout << endl;
    dystoMaze->print();

    delete maze_game;
    delete faeryFactory;
    delete dystoFactory;
    delete faeryMaze;
    delete dystoMaze;

    return 0;
}
