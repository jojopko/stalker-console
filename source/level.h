#ifndef _LEVEL_H_
#define _LEVEL_H_

struct Cell {
    int x;
    int y;
    Item *item_on_earth;
    bool is_moveable;
};

struct Level {
    int width;
    int height;
    Cell *field;
};

#endif