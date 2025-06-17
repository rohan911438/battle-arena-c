#include <stdio.h>
#include <string.h>
#include "player.h"

void init_player(Player *p) {
    strcpy(p->name, "Hero");
    p->max_hp = 100;
    p->hp = 100;
    p->attack = 15;
    p->defense = 10;
    p->potions = 3;
    p->is_defending = 0;
}

void use_potion(Player *p) {
    if (p->potions > 0) {
        printf("%s uses a potion! +30 HP\n", p->name);
        p->hp += 30;
        if (p->hp > p->max_hp) p->hp = p->max_hp;
        p->potions--;
    } else {
        printf("No potions left!\n");
    }
}

void player_turn(Player *p) {
    int choice;
    printf("\n1. Attack\n2. Defend\n3. Use Potion\nChoose action: ");
    scanf("%d", &choice);
    p->is_defending = 0;

    switch (choice) {
        case 1:
            break; // handled in combat
        case 2:
            p->is_defending = 1;
            printf("%s is defending!\n", p->name);
            break;
        case 3:
            use_potion(p);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
}