#ifndef _GAME_H_
#define _GAME_H_

#include "level.h"
#include "entity.h"
#include "item.h"

#define MAX_ENTITIES_ON_LEVEL 64
#define MAX_ITEMS_ON_LEVEL 1024

void update_game();
Level * init_level();
Item * init_items();
Entity * init_entities();
bool start_game();
int get_steps();
bool do_run();

#endif