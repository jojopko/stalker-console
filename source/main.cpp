#include <stdlib.h>
#include <stdio.h>
#include "game.h"
#include "level.h"
#include "entity.h"
#include "camera.h"

int main() {
    Level *current_level = init_level();
    Item *items_on_level = init_items();
    Entity *entities = init_entities();
    Camera *camera = init_camera();



    int i;
    start_game();
    while (do_run()) {
        load_level("../assets/levels/0.txt\0", current_level);
        draw_level(camera, current_level);
        draw(camera);
        scanf("%d", &i);
        clear(camera);
        camera->offset_x += 1;
        camera->offset_y += 1;
    }

    return 0;
}
// перемещение bool move(int x, int y)
// функция для боевки (player, enemy) -> do/while()
// 
