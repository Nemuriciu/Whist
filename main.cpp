#include "MyForm.h"
#include "Card.h"
#include "Player.h"
#include <vector>
#include "stdlib.h"
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
	
	int num_pl;
	cin >> num_pl;
	
	vector  <Card*> cards = createVector(num_pl);
	vector <Player*> players;

	for (size_t i = 0; i < num_pl; i++)
	{
		string name = "Player";
		char str[2];
		itoa(i + 1, str, 10);
		name = name + str;
		Player *player = new Player(name);
		players.push_back(player);
	}



	return 0;
}