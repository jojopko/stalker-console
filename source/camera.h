#ifndef _CAMERA_H_
#define _CAMERA_H_

#include "item.h"
#include "entity.h"
#include "texture.h"
#include "level.h"

struct Camera {
    int offset_x;
    int offset_y;
    int width;
    int height;
    Texture * surface;
};

#define CAMERA_WIDTH 100
#define CAMERA_HEIGHT 30

Camera * init_camera();

void draw_items(Camera * camera, Item * items);

void draw_entities(Camera * camera, Entity * entities);

void draw_level(Camera * camera, const Level * level);

void draw_log(Camera * camera, const ColoredText text);

void draw_stats(Camera * camera, const Entity * player);

void draw(const Camera * camera);

void clear(Camera * camera);

#endif