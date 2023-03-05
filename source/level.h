#ifndef _LEVEL_H_
#define _LEVEL_H_

#include "item.h"
#include "texture.h"

#define CELL_TYPE_NONE 46
#define CELL_TYPE_WALL 35

struct Cell {
    int x;
    int y;
    bool is_moveable;
    Texture texture;
};

struct Level {
    int width;
    int height;
    Cell *field;
};

void load_level(const char * filename, Level * level);

void draw_level(const Level *level);

#endif