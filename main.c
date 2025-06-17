#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "player.h"
#include "enemy_ai.h"
#include "combat.h"

int main() {
    srand(time(NULL));
    Player player;
    Enemy enemy;

    init_player(&player);
    init_enemy(&enemy);

    printf("Welcome to the RPG Arena!\n");
    battle(&player, &enemy);
    return 0;
}