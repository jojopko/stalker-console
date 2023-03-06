#include <stdio.h>
#include <stdlib.h>
#include "level.h"
#include "texture.h"

void load_level(const char * filename, Level * level) {
    FILE * fp = fopen(filename, "r");
    const int buffer_size = 256;
    char buffer[buffer_size];
    if (!fp) {
        return;
    }
    
    if (level->field != NULL){
        free(level->field);
    }

    int w, h;
    fscanf(fp, "%d %d\n", &w, &h);
    
    level->field = (Cell *) malloc(sizeof(Cell) * w * h);
    level->width = w;
    level->height = h;

    for (int i = 0; i < h && !feof(fp); i++) {
        fgets(buffer, buffer_size, fp);
        for (int j = 0; j < w; j++) {
            char c = buffer[j];
            Cell * current = &level->field[i * w + j];
            switch(c) {
                case CELL_TYPE_NONE:
                    current->is_moveable = true;
                    current->texture = TEXTURE_NONE;
                    current->x = j;
                    current->y = i;
                    break;
                case CELL_TYPE_WALL:
                    current->is_moveable = false;
                    current->texture = TEXTURE_WALL;
                    current->x = j;
                    current->y = i;
                    break;
                default:
                    current->is_moveable = false;
                    current->texture = TEXTURE_WALL;
                    current->x = j;
                    current->y = i;
            }
        }
    }
    fclose(fp);
}

void draw_level(const Level *level) {
    int w = level->width, 
        h = level->height;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            putchar(level->field[i * w + j].texture);
        }
        putchar('\n');
    }
}

