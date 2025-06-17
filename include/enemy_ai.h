#ifndef ENEMY_AI_H
#define ENEMY_AI_H

#include "player.h"

typedef enum {
    BASIC_ATTACK,
    STRONG_ATTACK,
    DEFEND,
    USE_POTION,
    BREAK_DEFENSE
} Action;

typedef struct {
    char name[50];
    int hp;
    int max_hp;
    int attack;
    int defense;
    int potions;
    int is_defending;
} Enemy;

void init_enemy(Enemy *e);
Action decide_enemy_action(Enemy *e, Player *p);
void execute_enemy_action(Action a, Enemy *e, Player *p);

#endif