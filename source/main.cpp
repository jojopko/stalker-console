#include "game.h"

int main() {
    Level *current_level = init_level();
    Item *items_on_level = init_items();
    Entity *entities = init_entities();
    
    while (do_run()) {
        
    }

    return 0;
}
