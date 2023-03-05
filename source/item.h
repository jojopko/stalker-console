#ifndef _ITEM_H_
#define _ITEM_H_

#include "coloredtext.h"

enum ItemType {
    None,
    Health,
    Knife
    // ...
};

struct Item {
    int id;
    ItemType type;
    ColoredText name; // название
    int value; // зависит от type. если health - то насколько восстановится
    int cost; // цена предмета
};

#endif