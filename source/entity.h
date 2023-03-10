#ifndef _ENTITY_H
#define _ENTITY_H

#include "item.h"

#define INVENTORY_SIZE 9

enum EntityType {
    PLAYER,
    FRIENDLY,
    BANDIT
    // ... по мере поступления
};

struct Inventory {
    int cash;
    Item items[INVENTORY_SIZE];
};

struct Entity {
    EntityType type; // тип существа
    int x; 
    int y; 
    int hp; // здоровье
    int* armor; // head, body, foot и еще чтото было
    
};

Entity* SpawnEntity(EntityType type, int* armor, int x, int y, int hp);

bool movePlayer(Entity* Player, const Level* level, int dx, int dy);

#endif