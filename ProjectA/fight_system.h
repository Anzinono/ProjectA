//fightsystem.h
#pragma once

int critChance(int schaden);
int takeDmg(int str, int def);
int heal(Stats_spieler& Player);
void escape(bool escape_try);

void fightMenu(Stats_spieler& Player_fight, Stats_enemy& Enemy_fight);
void enemyTurn(Stats_enemy& Enemy_fight, Stats_spieler& Player_fight);
