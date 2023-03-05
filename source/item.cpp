#include "item.h"
Item* spawn_item(ItemType type, int value, int id, ColoredText name, int cost)
{
    Item* item = (Item*)malloc(sizeof(Item));
    item->id = id;
    item->type = type;
    item->name = name;
    item->cost = cost;
    item->value = value;
    return item;
}
// Принт инфо предмета, инвентарь, перемещение предметов между инвентарями.