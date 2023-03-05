#include "game.h"
#include "level.h"

int main() {
    Level *current_level = init_level();
    Item *items_on_level = init_items();
    Entity *entities = init_entities();
    
    load_level("assets/levels/0.txt\0", current_level);
    draw_level(current_level);

    // while (do_run()) {
        
    // }

    return 0;
}
