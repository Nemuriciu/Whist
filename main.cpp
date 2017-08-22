#include "MenuForm.h"
#include "Player.h"
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <random>

using namespace std;
using namespace Whist;

vector <Card*> createVector(int val)
{
	vector  <Card*> cards;
	
	for (size_t i = 15 - 2*val; i <= 14; i++)
	{
		Card *a = new Card(i, Card::Club);
		Card *b = new Card(i, Card::Heart);
		Card *c = new Card(i, Card::Diamond);
		Card *d = new Card(i, Card::Spade);

		cards.push_back(a);
		cards.push_back(b); 
		cards.push_back(c);
		cards.push_back(d);
	}

	return cards;
}

int checkingCard(Player* player, Card* card, vector <Card*> cardsOnTable)
{
	if (card->type == cardsOnTable[0]->type)
		return 1;

	for (size_t i = 0; i < player->cards.size(); i++)
		if (player->cards[i]->type == cardsOnTable[0]->type)
			return 0;

	return 1;
}

int points(vector <Card*> cardsOnTable, Player* player)
{
	signed Points = 0;

	switch (player->game)
	{
		// Totals
	case (6):

		// King of hearts
	case (0):
		for (size_t i = 0; i < cardsOnTable.size(); i++)
			if (cardsOnTable[i]->type == 2 && cardsOnTable[i]->val == 13)
				Points = Points -80;
		if (player->game == 0)
			break;
		
		// Ten of clubs
	case (1):
		for (size_t i = 0; i < cardsOnTable.size(); i++)
			if (cardsOnTable[i]->type == 0 && cardsOnTable[i]->val == 10)
				Points = Points + 80;
		if (player->game == 1)
			break;

		// Queens
	case (2):
		for (size_t i = 0; i < cardsOnTable.size(); i++)
			if (cardsOnTable[i]->val == 12)
				Points = Points - 20;
		if (player->game == 2)
			break;

		// Diamonds
	case (3):
		for (size_t i = 0; i < cardsOnTable.size(); i++)
			if (cardsOnTable[i]->type == 1)
				Points = Points - 10;
		if (player->game == 3)
			break;

		// Whist
	case (4):
		Points = Points + 10;
			break;

		// Acool
	case (7):
		Points = Points - 10;
		break;

	}
	return Points;
}

int main()
{
	MenuForm^ mainWindow = gcnew MenuForm();
	mainWindow->ShowDialog();

	unsigned int num_pl = 6;
	vector  <Card*> cards = createVector(num_pl);
	vector <Player*> players;

	for (size_t i = 0; i < num_pl; i++)
	{
		// set name 
		string name = "Player";
		char str[2];
		_itoa_s(i + 1, str, 10);
		name = name + str;
		
		Player *player = new Player(name);
		players.push_back(player);
		
		// initialisation of vector players->cards

		for (size_t j = 0; j < 8; j++)
		{
			mt19937 generator;
			generator.seed(random_device()());
			uniform_int_distribution<mt19937::result_type> dist(0, 431269821);
			
			int random_num = 0;

			if(cards.size() >= 2)
				random_num = dist(generator) % (cards.size() - 1);

			Card *card = cards[random_num];
			players[i]->cards.push_back(card);
			cards.erase(cards.begin() + random_num);
		}
	}

	vector <Card*> cardsOnTable;

	
	/*for (size_t i = 0; i < 8; i++)
	{
		cout << endl;
		cout << players[1]->cards[i]->val << " " << players[1]->cards[i]->type;
	}

	while (1) {}*/
	return 0;
}