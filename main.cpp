#include "MyForm.h"
#include "Player.h"
#include <vector>
#include <stdlib.h>
#include <iostream>

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
	MyForm^ mainWindow = gcnew MyForm();
	mainWindow->ShowDialog();
	
	unsigned int num_pl = 0;
	cin >> num_pl;
	
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

		for (size_t i = 0; i < 8; i++)
		{
			int random_num = rand() % num_pl * 8;
			Card *card = cards[random_num - 1];
			cards.erase(cards.begin() + random_num - 1);
			players[i]->cards.push_back(card);
		}
		

	}

	return 0;
}