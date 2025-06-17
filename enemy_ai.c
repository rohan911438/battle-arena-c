#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "enemy_ai.h"

void init_enemy(Enemy *e) {
    strcpy(e->name, "AI Beast");
    e->max_hp = 100;
    e->hp = 100;
    e->attack = 12;
    e->defense = 8;
    e->potions = 2;
    e->is_defending = 0;
}

Action decide_enemy_action(Enemy *e, Player *p) {
    if (e->hp < 20 && e->potions > 0) return USE_POTION;
    if (p->is_defending) return BREAK_DEFENSE;
    int r = rand() % 100;
    if (r < 50) return BASIC_ATTACK;
    else return STRONG_ATTACK;
}

void execute_enemy_action(Action a, Enemy *e, Player *p) {
    e->is_defending = 0;
    switch (a) {
        case BASIC_ATTACK:
            printf("%s does a basic attack!\n", e->name);
            p->hp -= (e->attack - p->defense / 2);
            break;
        case STRONG_ATTACK:
            printf("%s unleashes a strong attack!\n", e->name);
            p->hp -= (e->attack * 1.5 - p->defense / 3);
            break;
        case DEFEND:
            e->is_defending = 1;
            printf("%s is defending!\n", e->name);
            break;
        case USE_POTION:
            printf("%s uses a potion!\n", e->name);
            e->hp += 30;
            if (e->hp > e->max_hp) e->hp = e->max_hp;
            e->potions--;
            break;
        case BREAK_DEFENSE:
            printf("%s tries to break through defense!\n", e->name);
            p->hp -= (e->attack - p->defense / 4);
            break;
    }
    if (p->hp < 0) p->hp = 0;
}
