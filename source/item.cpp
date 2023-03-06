#include "item.h"
#include "entity.h"
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

//����� ���������� � ��������
void print_item_info(ItemType type, int value, ColoredText name, int cost)
{
    printf("%s\n%s\n%d\n%d", name, type, value, cost);
}

void item_sell(Inventory Inventory_Person, Inventory Inventory_NPC)
{
    int select_item;
    Item* temp_item;
    printf("Vvedite nomer predmeta, kotoriy hotite prodat'\n");
    do {
        scanf_s("%d", select_item);
        if (select_item > 9 || select_item < 1) printf("Ykazan neverniy nomer predmeta\n");
    } while (select_item > 9 || select_item < 1);
    switch (select_item)
    {
    case 1:
        if (Inventory_Person.items[0].type != None)
        {
            print_item_info(Inventory_Person.items[0].type, Inventory_Person.items[0].value, Inventory_Person.items[0].name, Inventory_Person.items[0].cost);
            if (Inventory_NPC.items[0].type == None)
            {
                *temp_item = Inventory_Person.items[0];
                Inventory_Person.items[0].type = None;
                Inventory_NPC.items[0] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[0].cost;
                Inventory_Person.cash += Inventory_Person.items[0].cost;
            }
            else if (Inventory_NPC.items[1].type == None)
            {
                *temp_item = Inventory_Person.items[0];
                Inventory_Person.items[0].type = None;
                Inventory_NPC.items[1] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[0].cost;
                Inventory_Person.cash += Inventory_Person.items[0].cost;
            }
            else if (Inventory_NPC.items[2].type == None)
            {
                *temp_item = Inventory_Person.items[0];
                Inventory_Person.items[0].type = None;
                Inventory_NPC.items[2] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[0].cost;
                Inventory_Person.cash += Inventory_Person.items[0].cost;
            }
            else if (Inventory_NPC.items[3].type == None)
            {
                *temp_item = Inventory_Person.items[0];
                Inventory_Person.items[0].type = None;
                Inventory_NPC.items[3] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[0].cost;
                Inventory_Person.cash += Inventory_Person.items[0].cost;
            }
            else if (Inventory_NPC.items[4].type == None)
            {
                *temp_item = Inventory_Person.items[0];
                Inventory_Person.items[0].type = None;
                Inventory_NPC.items[4] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[0].cost;
                Inventory_Person.cash += Inventory_Person.items[0].cost;
            }
            else if (Inventory_NPC.items[5].type == None)
            {
                *temp_item = Inventory_Person.items[0];
                Inventory_Person.items[0].type = None;
                Inventory_NPC.items[5] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[0].cost;
                Inventory_Person.cash += Inventory_Person.items[0].cost;
            }
            else if (Inventory_NPC.items[6].type == None)
            {
                *temp_item = Inventory_Person.items[0];
                Inventory_Person.items[0].type = None;
                Inventory_NPC.items[6] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[0].cost;
                Inventory_Person.cash += Inventory_Person.items[0].cost;
            }
            else if (Inventory_NPC.items[7].type == None)
            {
                *temp_item = Inventory_Person.items[0];
                Inventory_Person.items[0].type = None;
                Inventory_NPC.items[7] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[0].cost;
                Inventory_Person.cash += Inventory_Person.items[0].cost;
            }
            else if (Inventory_NPC.items[8].type == None)
            {
                *temp_item = Inventory_Person.items[0];
                Inventory_Person.items[0].type = None;
                Inventory_NPC.items[8] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[0].cost;
                Inventory_Person.cash += Inventory_Person.items[0].cost;
            }
            else printf("Inventar' torgovca polon");
        }
        else printf("Yacheyka pysta\n");
        break;
    case 2:
        if (Inventory_Person.items[1].type != None)
        {
            print_item_info(Inventory_Person.items[1].type, Inventory_Person.items[1].value, Inventory_Person.items[1].name, Inventory_Person.items[1].cost);
            if (Inventory_NPC.items[0].type == None)
            {
                *temp_item = Inventory_Person.items[1];
                Inventory_Person.items[1].type = None;
                Inventory_NPC.items[0] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[1].cost;
                Inventory_Person.cash += Inventory_Person.items[1].cost;
            }
            else if (Inventory_NPC.items[1].type == None)
            {
                *temp_item = Inventory_Person.items[1];
                Inventory_Person.items[1].type = None;
                Inventory_NPC.items[1] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[1].cost;
                Inventory_Person.cash += Inventory_Person.items[1].cost;
            }
            else if (Inventory_NPC.items[2].type == None)
            {
                *temp_item = Inventory_Person.items[1];
                Inventory_Person.items[1].type = None;
                Inventory_NPC.items[2] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[1].cost;
                Inventory_Person.cash += Inventory_Person.items[1].cost;
            }
            else if (Inventory_NPC.items[3].type == None)
            {
                *temp_item = Inventory_Person.items[1];
                Inventory_Person.items[1].type = None;
                Inventory_NPC.items[3] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[1].cost;
                Inventory_Person.cash += Inventory_Person.items[1].cost;
            }
            else if (Inventory_NPC.items[4].type == None)
            {
                *temp_item = Inventory_Person.items[1];
                Inventory_Person.items[1].type = None;
                Inventory_NPC.items[4] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[1].cost;
                Inventory_Person.cash += Inventory_Person.items[1].cost;
            }
            else if (Inventory_NPC.items[5].type == None)
            {
                *temp_item = Inventory_Person.items[1];
                Inventory_Person.items[1].type = None;
                Inventory_NPC.items[5] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[1].cost;
                Inventory_Person.cash += Inventory_Person.items[1].cost;
            }
            else if (Inventory_NPC.items[6].type == None)
            {
                *temp_item = Inventory_Person.items[1];
                Inventory_Person.items[1].type = None;
                Inventory_NPC.items[6] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[1].cost;
                Inventory_Person.cash += Inventory_Person.items[1].cost;
            }
            else if (Inventory_NPC.items[7].type == None)
            {
                *temp_item = Inventory_Person.items[1];
                Inventory_Person.items[1].type = None;
                Inventory_NPC.items[7] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[1].cost;
                Inventory_Person.cash += Inventory_Person.items[1].cost;
            }
            else if (Inventory_NPC.items[8].type == None)
            {
                *temp_item = Inventory_Person.items[1];
                Inventory_Person.items[1].type = None;
                Inventory_NPC.items[8] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[1].cost;
                Inventory_Person.cash += Inventory_Person.items[1].cost;
            }
            else printf("Inventar' torgovca polon");
        }
        else printf("Yacheyka pysta\n");
        break;
    case 3:
        if (Inventory_Person.items[2].type != None)
        {
            print_item_info(Inventory_Person.items[2].type, Inventory_Person.items[2].value, Inventory_Person.items[2].name, Inventory_Person.items[2].cost);
            if (Inventory_NPC.items[0].type == None)
            {
                *temp_item = Inventory_Person.items[2];
                Inventory_Person.items[2].type = None;
                Inventory_NPC.items[0] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[2].cost;
                Inventory_Person.cash += Inventory_Person.items[2].cost;
            }
            else if (Inventory_NPC.items[1].type == None)
            {
                *temp_item = Inventory_Person.items[2];
                Inventory_Person.items[2].type = None;
                Inventory_NPC.items[1] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[2].cost;
                Inventory_Person.cash += Inventory_Person.items[2].cost;
            }
            else if (Inventory_NPC.items[2].type == None)
            {
                *temp_item = Inventory_Person.items[2];
                Inventory_Person.items[2].type = None;
                Inventory_NPC.items[2] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[2].cost;
                Inventory_Person.cash += Inventory_Person.items[2].cost;
            }
            else if (Inventory_NPC.items[3].type == None)
            {
                *temp_item = Inventory_Person.items[2];
                Inventory_Person.items[2].type = None;
                Inventory_NPC.items[3] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[2].cost;
                Inventory_Person.cash += Inventory_Person.items[2].cost;
            }
            else if (Inventory_NPC.items[4].type == None)
            {
                *temp_item = Inventory_Person.items[2];
                Inventory_Person.items[2].type = None;
                Inventory_NPC.items[4] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[2].cost;
                Inventory_Person.cash += Inventory_Person.items[2].cost;
            }
            else if (Inventory_NPC.items[5].type == None)
            {
                *temp_item = Inventory_Person.items[2];
                Inventory_Person.items[2].type = None;
                Inventory_NPC.items[5] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[2].cost;
                Inventory_Person.cash += Inventory_Person.items[2].cost;
            }
            else if (Inventory_NPC.items[6].type == None)
            {
                *temp_item = Inventory_Person.items[2];
                Inventory_Person.items[2].type = None;
                Inventory_NPC.items[6] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[2].cost;
                Inventory_Person.cash += Inventory_Person.items[2].cost;
            }
            else if (Inventory_NPC.items[7].type == None)
            {
                *temp_item = Inventory_Person.items[2];
                Inventory_Person.items[2].type = None;
                Inventory_NPC.items[7] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[2].cost;
                Inventory_Person.cash += Inventory_Person.items[2].cost;
            }
            else if (Inventory_NPC.items[8].type == None)
            {
                *temp_item = Inventory_Person.items[2];
                Inventory_Person.items[2].type = None;
                Inventory_NPC.items[8] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[2].cost;
                Inventory_Person.cash += Inventory_Person.items[2].cost;
            }
            else printf("Inventar' torgovca polon");
        }
        else printf("Yacheyka pysta\n");
        break;
    case 4:
        if (Inventory_Person.items[3].type != None)
        {
            print_item_info(Inventory_Person.items[3].type, Inventory_Person.items[3].value, Inventory_Person.items[3].name, Inventory_Person.items[3].cost);
            if (Inventory_NPC.items[0].type == None)
            {
                *temp_item = Inventory_Person.items[3];
                Inventory_Person.items[3].type = None;
                Inventory_NPC.items[0] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[3].cost;
                Inventory_Person.cash += Inventory_Person.items[3].cost;
            }
            else if (Inventory_NPC.items[1].type == None)
            {
                *temp_item = Inventory_Person.items[3];
                Inventory_Person.items[3].type = None;
                Inventory_NPC.items[1] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[3].cost;
                Inventory_Person.cash += Inventory_Person.items[3].cost;
            }
            else if (Inventory_NPC.items[2].type == None)
            {
                *temp_item = Inventory_Person.items[3];
                Inventory_Person.items[3].type = None;
                Inventory_NPC.items[2] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[3].cost;
                Inventory_Person.cash += Inventory_Person.items[3].cost;
            }
            else if (Inventory_NPC.items[3].type == None)
            {
                *temp_item = Inventory_Person.items[3];
                Inventory_Person.items[3].type = None;
                Inventory_NPC.items[3] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[3].cost;
                Inventory_Person.cash += Inventory_Person.items[3].cost;
            }
            else if (Inventory_NPC.items[4].type == None)
            {
                *temp_item = Inventory_Person.items[3];
                Inventory_Person.items[3].type = None;
                Inventory_NPC.items[4] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[3].cost;
                Inventory_Person.cash += Inventory_Person.items[3].cost;
            }
            else if (Inventory_NPC.items[5].type == None)
            {
                *temp_item = Inventory_Person.items[3];
                Inventory_Person.items[3].type = None;
                Inventory_NPC.items[5] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[3].cost;
                Inventory_Person.cash += Inventory_Person.items[3].cost;
            }
            else if (Inventory_NPC.items[6].type == None)
            {
                *temp_item = Inventory_Person.items[3];
                Inventory_Person.items[3].type = None;
                Inventory_NPC.items[6] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[3].cost;
                Inventory_Person.cash += Inventory_Person.items[3].cost;
            }
            else if (Inventory_NPC.items[7].type == None)
            {
                *temp_item = Inventory_Person.items[3];
                Inventory_Person.items[3].type = None;
                Inventory_NPC.items[7] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[3].cost;
                Inventory_Person.cash += Inventory_Person.items[3].cost;
            }
            else if (Inventory_NPC.items[8].type == None)
            {
                *temp_item = Inventory_Person.items[3];
                Inventory_Person.items[3].type = None;
                Inventory_NPC.items[8] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[3].cost;
                Inventory_Person.cash += Inventory_Person.items[3].cost;
            }
            else printf("Inventar' torgovca polon");
        }
        else printf("Yacheyka pysta\n");
        break;
    case 5:
        if (Inventory_Person.items[4].type != None)
        {
            print_item_info(Inventory_Person.items[4].type, Inventory_Person.items[4].value, Inventory_Person.items[4].name, Inventory_Person.items[4].cost);
            if (Inventory_NPC.items[0].type == None)
            {
                *temp_item = Inventory_Person.items[4];
                Inventory_Person.items[4].type = None;
                Inventory_NPC.items[0] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[4].cost;
                Inventory_Person.cash += Inventory_Person.items[4].cost;
            }
            else if (Inventory_NPC.items[1].type == None)
            {
                *temp_item = Inventory_Person.items[4];
                Inventory_Person.items[4].type = None;
                Inventory_NPC.items[1] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[4].cost;
                Inventory_Person.cash += Inventory_Person.items[4].cost;
            }
            else if (Inventory_NPC.items[2].type == None)
            {
                *temp_item = Inventory_Person.items[4];
                Inventory_Person.items[4].type = None;
                Inventory_NPC.items[2] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[4].cost;
                Inventory_Person.cash += Inventory_Person.items[4].cost;
            }
            else if (Inventory_NPC.items[3].type == None)
            {
                *temp_item = Inventory_Person.items[4];
                Inventory_Person.items[4].type = None;
                Inventory_NPC.items[3] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[4].cost;
                Inventory_Person.cash += Inventory_Person.items[4].cost;
            }
            else if (Inventory_NPC.items[4].type == None)
            {
                *temp_item = Inventory_Person.items[4];
                Inventory_Person.items[4].type = None;
                Inventory_NPC.items[4] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[4].cost;
                Inventory_Person.cash += Inventory_Person.items[4].cost;
            }
            else if (Inventory_NPC.items[5].type == None)
            {
                *temp_item = Inventory_Person.items[4];
                Inventory_Person.items[4].type = None;
                Inventory_NPC.items[5] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[4].cost;
                Inventory_Person.cash += Inventory_Person.items[4].cost;
            }
            else if (Inventory_NPC.items[6].type == None)
            {
                *temp_item = Inventory_Person.items[4];
                Inventory_Person.items[4].type = None;
                Inventory_NPC.items[6] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[4].cost;
                Inventory_Person.cash += Inventory_Person.items[4].cost;
            }
            else if (Inventory_NPC.items[7].type == None)
            {
                *temp_item = Inventory_Person.items[4];
                Inventory_Person.items[4].type = None;
                Inventory_NPC.items[7] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[4].cost;
                Inventory_Person.cash += Inventory_Person.items[4].cost;
            }
            else if (Inventory_NPC.items[8].type == None)
            {
                *temp_item = Inventory_Person.items[4];
                Inventory_Person.items[4].type = None;
                Inventory_NPC.items[8] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[4].cost;
                Inventory_Person.cash += Inventory_Person.items[4].cost;
            }
            else printf("Inventar' torgovca polon");
        }
        else printf("Yacheyka pysta\n");
        break;
    case 6:
        if (Inventory_Person.items[5].type != None)
        {
            print_item_info(Inventory_Person.items[5].type, Inventory_Person.items[5].value, Inventory_Person.items[5].name, Inventory_Person.items[5].cost);
            if (Inventory_NPC.items[0].type == None)
            {
                *temp_item = Inventory_Person.items[5];
                Inventory_Person.items[5].type = None;
                Inventory_NPC.items[0] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[5].cost;
                Inventory_Person.cash += Inventory_Person.items[5].cost;
            }
            else if (Inventory_NPC.items[1].type == None)
            {
                *temp_item = Inventory_Person.items[5];
                Inventory_Person.items[5].type = None;
                Inventory_NPC.items[1] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[5].cost;
                Inventory_Person.cash += Inventory_Person.items[5].cost;
            }
            else if (Inventory_NPC.items[2].type == None)
            {
                *temp_item = Inventory_Person.items[5];
                Inventory_Person.items[5].type = None;
                Inventory_NPC.items[2] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[5].cost;
                Inventory_Person.cash += Inventory_Person.items[5].cost;
            }
            else if (Inventory_NPC.items[3].type == None)
            {
                *temp_item = Inventory_Person.items[5];
                Inventory_Person.items[5].type = None;
                Inventory_NPC.items[3] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[5].cost;
                Inventory_Person.cash += Inventory_Person.items[5].cost;
            }
            else if (Inventory_NPC.items[4].type == None)
            {
                *temp_item = Inventory_Person.items[5];
                Inventory_Person.items[5].type = None;
                Inventory_NPC.items[4] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[5].cost;
                Inventory_Person.cash += Inventory_Person.items[5].cost;
            }
            else if (Inventory_NPC.items[5].type == None)
            {
                *temp_item = Inventory_Person.items[5];
                Inventory_Person.items[5].type = None;
                Inventory_NPC.items[5] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[5].cost;
                Inventory_Person.cash += Inventory_Person.items[5].cost;
            }
            else if (Inventory_NPC.items[6].type == None)
            {
                *temp_item = Inventory_Person.items[5];
                Inventory_Person.items[5].type = None;
                Inventory_NPC.items[6] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[5].cost;
                Inventory_Person.cash += Inventory_Person.items[5].cost;
            }
            else if (Inventory_NPC.items[7].type == None)
            {
                *temp_item = Inventory_Person.items[5];
                Inventory_Person.items[5].type = None;
                Inventory_NPC.items[7] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[5].cost;
                Inventory_Person.cash += Inventory_Person.items[5].cost;
            }
            else if (Inventory_NPC.items[8].type == None)
            {
                *temp_item = Inventory_Person.items[5];
                Inventory_Person.items[5].type = None;
                Inventory_NPC.items[8] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[5].cost;
                Inventory_Person.cash += Inventory_Person.items[5].cost;
            }
            else printf("Inventar' torgovca polon");
        }
        else printf("Yacheyka pysta\n");
        break;
    case 7:
        if (Inventory_Person.items[6].type != None)
        {
            print_item_info(Inventory_Person.items[6].type, Inventory_Person.items[6].value, Inventory_Person.items[6].name, Inventory_Person.items[6].cost);
            if (Inventory_NPC.items[0].type == None)
            {
                *temp_item = Inventory_Person.items[6];
                Inventory_Person.items[6].type = None;
                Inventory_NPC.items[0] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[6].cost;
                Inventory_Person.cash += Inventory_Person.items[6].cost;
            }
            else if (Inventory_NPC.items[1].type == None)
            {
                *temp_item = Inventory_Person.items[6];
                Inventory_Person.items[6].type = None;
                Inventory_NPC.items[1] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[6].cost;
                Inventory_Person.cash += Inventory_Person.items[6].cost;
            }
            else if (Inventory_NPC.items[2].type == None)
            {
                *temp_item = Inventory_Person.items[6];
                Inventory_Person.items[6].type = None;
                Inventory_NPC.items[2] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[6].cost;
                Inventory_Person.cash += Inventory_Person.items[6].cost;
            }
            else if (Inventory_NPC.items[3].type == None)
            {
                *temp_item = Inventory_Person.items[6];
                Inventory_Person.items[6].type = None;
                Inventory_NPC.items[3] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[6].cost;
                Inventory_Person.cash += Inventory_Person.items[6].cost;
            }
            else if (Inventory_NPC.items[4].type == None)
            {
                *temp_item = Inventory_Person.items[6];
                Inventory_Person.items[6].type = None;
                Inventory_NPC.items[4] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[6].cost;
                Inventory_Person.cash += Inventory_Person.items[6].cost;
            }
            else if (Inventory_NPC.items[5].type == None)
            {
                *temp_item = Inventory_Person.items[6];
                Inventory_Person.items[6].type = None;
                Inventory_NPC.items[5] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[6].cost;
                Inventory_Person.cash += Inventory_Person.items[6].cost;
            }
            else if (Inventory_NPC.items[6].type == None)
            {
                *temp_item = Inventory_Person.items[6];
                Inventory_Person.items[6].type = None;
                Inventory_NPC.items[6] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[6].cost;
                Inventory_Person.cash += Inventory_Person.items[6].cost;
            }
            else if (Inventory_NPC.items[7].type == None)
            {
                *temp_item = Inventory_Person.items[6];
                Inventory_Person.items[6].type = None;
                Inventory_NPC.items[7] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[6].cost;
                Inventory_Person.cash += Inventory_Person.items[6].cost;
            }
            else if (Inventory_NPC.items[8].type == None)
            {
                *temp_item = Inventory_Person.items[6];
                Inventory_Person.items[6].type = None;
                Inventory_NPC.items[8] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[6].cost;
                Inventory_Person.cash += Inventory_Person.items[6].cost;
            }
            else printf("Inventar' torgovca polon");
        }
        else printf("Yacheyka pysta\n");
        break;
    case 8:
        if (Inventory_Person.items[7].type != None)
        {
            print_item_info(Inventory_Person.items[7].type, Inventory_Person.items[7].value, Inventory_Person.items[7].name, Inventory_Person.items[7].cost);
            if (Inventory_NPC.items[0].type == None)
            {
                *temp_item = Inventory_Person.items[7];
                Inventory_Person.items[7].type = None;
                Inventory_NPC.items[0] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[7].cost;
                Inventory_Person.cash += Inventory_Person.items[7].cost;
            }
            else if (Inventory_NPC.items[1].type == None)
            {
                *temp_item = Inventory_Person.items[7];
                Inventory_Person.items[7].type = None;
                Inventory_NPC.items[1] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[7].cost;
                Inventory_Person.cash += Inventory_Person.items[7].cost;
            }
            else if (Inventory_NPC.items[2].type == None)
            {
                *temp_item = Inventory_Person.items[7];
                Inventory_Person.items[7].type = None;
                Inventory_NPC.items[2] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[7].cost;
                Inventory_Person.cash += Inventory_Person.items[7].cost;
            }
            else if (Inventory_NPC.items[3].type == None)
            {
                *temp_item = Inventory_Person.items[7];
                Inventory_Person.items[7].type = None;
                Inventory_NPC.items[3] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[7].cost;
                Inventory_Person.cash += Inventory_Person.items[7].cost;
            }
            else if (Inventory_NPC.items[4].type == None)
            {
                *temp_item = Inventory_Person.items[7];
                Inventory_Person.items[7].type = None;
                Inventory_NPC.items[4] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[7].cost;
                Inventory_Person.cash += Inventory_Person.items[7].cost;
            }
            else if (Inventory_NPC.items[5].type == None)
            {
                *temp_item = Inventory_Person.items[7];
                Inventory_Person.items[7].type = None;
                Inventory_NPC.items[5] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[7].cost;
                Inventory_Person.cash += Inventory_Person.items[7].cost;
            }
            else if (Inventory_NPC.items[6].type == None)
            {
                *temp_item = Inventory_Person.items[7];
                Inventory_Person.items[7].type = None;
                Inventory_NPC.items[6] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[7].cost;
                Inventory_Person.cash += Inventory_Person.items[7].cost;
            }
            else if (Inventory_NPC.items[7].type == None)
            {
                *temp_item = Inventory_Person.items[7];
                Inventory_Person.items[7].type = None;
                Inventory_NPC.items[7] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[7].cost;
                Inventory_Person.cash += Inventory_Person.items[7].cost;
            }
            else if (Inventory_NPC.items[8].type == None)
            {
                *temp_item = Inventory_Person.items[7];
                Inventory_Person.items[7].type = None;
                Inventory_NPC.items[8] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[7].cost;
                Inventory_Person.cash += Inventory_Person.items[7].cost;
            }
            else printf("Inventar' torgovca polon");
        }
        else printf("Yacheyka pysta\n");
        break;
    case 9:
        if (Inventory_Person.items[8].type != None)
        {
            print_item_info(Inventory_Person.items[8].type, Inventory_Person.items[8].value, Inventory_Person.items[8].name, Inventory_Person.items[8].cost);
            if (Inventory_NPC.items[0].type == None)
            {
                *temp_item = Inventory_Person.items[8];
                Inventory_Person.items[8].type = None;
                Inventory_NPC.items[0] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[8].cost;
                Inventory_Person.cash += Inventory_Person.items[8].cost;
            }
            else if (Inventory_NPC.items[1].type == None)
            {
                *temp_item = Inventory_Person.items[8];
                Inventory_Person.items[8].type = None;
                Inventory_NPC.items[1] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[8].cost;
                Inventory_Person.cash += Inventory_Person.items[8].cost;
            }
            else if (Inventory_NPC.items[2].type == None)
            {
                *temp_item = Inventory_Person.items[8];
                Inventory_Person.items[8].type = None;
                Inventory_NPC.items[2] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[8].cost;
                Inventory_Person.cash += Inventory_Person.items[8].cost;
            }
            else if (Inventory_NPC.items[3].type == None)
            {
                *temp_item = Inventory_Person.items[8];
                Inventory_Person.items[8].type = None;
                Inventory_NPC.items[3] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[8].cost;
                Inventory_Person.cash += Inventory_Person.items[8].cost;
            }
            else if (Inventory_NPC.items[4].type == None)
            {
                *temp_item = Inventory_Person.items[8];
                Inventory_Person.items[8].type = None;
                Inventory_NPC.items[4] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[8].cost;
                Inventory_Person.cash += Inventory_Person.items[8].cost;
            }
            else if (Inventory_NPC.items[5].type == None)
            {
                *temp_item = Inventory_Person.items[8];
                Inventory_Person.items[8].type = None;
                Inventory_NPC.items[5] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[8].cost;
                Inventory_Person.cash += Inventory_Person.items[8].cost;
            }
            else if (Inventory_NPC.items[6].type == None)
            {
                *temp_item = Inventory_Person.items[8];
                Inventory_Person.items[8].type = None;
                Inventory_NPC.items[6] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[8].cost;
                Inventory_Person.cash += Inventory_Person.items[8].cost;
            }
            else if (Inventory_NPC.items[7].type == None)
            {
                *temp_item = Inventory_Person.items[8];
                Inventory_Person.items[8].type = None;
                Inventory_NPC.items[7] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[8].cost;
                Inventory_Person.cash += Inventory_Person.items[8].cost;
            }
            else if (Inventory_NPC.items[8].type == None)
            {
                *temp_item = Inventory_Person.items[8];
                Inventory_Person.items[8].type = None;
                Inventory_NPC.items[8] = *temp_item;
                temp_item->type = None;
                Inventory_NPC.cash -= Inventory_Person.items[8].cost;
                Inventory_Person.cash += Inventory_Person.items[8].cost;
            }
            else printf("Inventar' torgovca polon");
        }
        else printf("Yacheyka pysta\n");
        break;
    default:
        break;
    }
}

//���������, ����������� ��������� ����� �����������.