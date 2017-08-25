#pragma once
#include <vector>
#include <string>
#include "Player.h"
#include "GameForm.h"

class Main
{
public:
	Main();
	~Main();

	unsigned int num_pl = 6;
	int tabel[6][8];
	vector <Card*> cards;
	vector <Player*> players;
	vector <Card*> cardsOnTable;

	vector <Card*> createVector(int val);
	int checkingCard(Player* player, Card* card, vector <Card*> cardsOnTable);
	int points(vector <Card*> cardsOnTable);
	void markGame(Player *player, int game, int (&tabel)[6][8]);
	int checkingTabel(Player *player, int game, int(&tabel)[6][8]); 
	Player *winner(vector <Card*> cardsOnTable);
	void giveCards();
};

