#include <stdlib.h>
#include "entity.h"

Entity* SpawnEntity(EntityType type, int *armor, int x, int y, int hp) {

	Entity* entity = (Entity*) malloc(sizeof(Entity));
	entity->type = type;
	entity->armor = armor;
	entity->x = x;
	entity->y = y;
	entity->hp = hp;
	return entity;
		
}
