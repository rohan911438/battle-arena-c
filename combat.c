#include <stdio.h>
#include "combat.h"

void battle(Player *p, Enemy *e) {
    while (p->hp > 0 && e->hp > 0) {
        printf("\n=== Player: %d HP | Enemy: %d HP ===\n", p->hp, e->hp);
        player_turn(p);
        if (p->is_defending == 0) {
            printf("%s attacks!\n", p->name);
            int damage = p->attack - (e->is_defending ? e->defense : e->defense / 2);
            e->hp -= damage;
        }
        if (e->hp <= 0) break;

        Action a = decide_enemy_action(e, p);
        execute_enemy_action(a, e, p);
    }

    if (p->hp > 0) printf("\nYou win!\n");
    else printf("\nYou lost!\n");
}