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