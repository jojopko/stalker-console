#include "game.h"
#include <stdio.h>
#include <stdlib.h>

struct GameStatus {
    int step;
    bool is_running;
} * game_status;


bool start_game() {
    game_status = (GameStatus *) malloc(sizeof(GameStatus));
    game_status->step = 0;
    game_status->is_running = true;
    return true;
}

Level * init_level() {
    return (Level *) malloc(sizeof(Level));
}

Item * init_items() {
    return (Item *) malloc(sizeof(Item));
}

Entity * init_entities() {
    return (Entity *) malloc(sizeof(Entity));
}

void update_game() {

}

int get_steps() {
    return game_status->step;
}

bool do_run() {
    return game_status->is_running;
}


