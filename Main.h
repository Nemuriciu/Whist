#pragma once
#include <vector>
#include <string>
#include "Player.h"

class Main
{
public:
	Main();
	~Main();

	unsigned int num_pl = 6;
	vector <Card*> cards;
	vector <Player*> players;
	vector <Card*> cardsOnTable;

	vector <Card*> createVector(int val);
	int checkingCard(Player* player, Card* card, vector <Card*> cardsOnTable);
	int points(vector <Card*> cardsOnTable, Player* player);
};

