#ifndef _LEVEL_H_
#define _LEVEL_H_

#include "item.h"

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

void load_level(const char * filename, const Level * level);

void draw_level(Level *level);

#endif