#include <stdlib.h>
#include <stdio.h>
#include "camera.h"
#include "texture.h"

Camera * init_camera() {
    Camera * camera = (Camera *) malloc(sizeof(Camera));
    camera->offset_x = 0;
    camera->offset_y = 0;
    camera->height = CAMERA_HEIGHT;
    camera->width = CAMERA_WIDTH;
    camera->surface = (Texture *) malloc(sizeof(Texture) * camera->width * camera->height);
    return camera;
}

void draw(const Camera * camera) {
    for (int i = 0; i < camera->height; i++) {
        for (int j = 0; j < camera->width; j++) {
            int c = camera->surface[i * camera->width + j];
            putchar(c);
        }
        // if(i == camera->height -1) {}
        putchar('\n');
    }
}

void clear(Camera * camera) {
    for (int i = 0; i < camera->height; i++) {
        for (int j = 0; j < camera->width; j++) {
            camera->surface[i * camera->width + j] = '\0';
        }
    }
    system("clear");
}

void draw_level(Camera * camera, const Level * level) {
    if(camera == NULL) {
        fprintf(stderr, "draw_level: camera is null");
        return;
    }

    Texture * surface = camera->surface;
    for (int i = camera->offset_y; i < camera->offset_y + camera->height; i++) {
        for (int j = camera->offset_x; j < camera->offset_x + camera->width; j++) {
            int sur_j = j - camera->offset_x,
                sur_i = i - camera->offset_y,
                index_sur = sur_i * camera->width + sur_j,
                index_level = i * level->width + j;
            if ( (j < 0 || j > level->width) ||
                 (i < 0 || i > level->height)) {
                surface[index_sur] = TEXTURE_WALL;
            }
            else {
                surface[index_sur] = level->field[index_level].texture;
            }
        }
    }
}

void draw_items(Camera * camera, Item * items) {

}

void draw_entities(Camera * camera, Entity * entities) {

}

void draw_log(Camera * camera, const ColoredText text) {

}

void draw_stats(Camera * camera, const Entity * player) {

}

