#ifndef PLAYER_H
#define PLAYER_H

typedef struct {
    char name[50];
    int hp;
    int max_hp;
    int attack;
    int defense;
    int potions;
    int is_defending;
} Player;

void init_player(Player *p);
void player_turn(Player *player);
void use_potion(Player *player);

#endif