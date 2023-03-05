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
    int armor[4]; // head, body, foot и еще чтото было
    
};

#endif