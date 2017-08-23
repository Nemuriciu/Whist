#include "Card.h"
#include <vector>
#include <string>

using namespace std;

public class Player
{
public:
	enum Games
	{
		King_of_Hearts = 0, Ten_of_Clubs = 1, Queens = 2, Diamonds = 3,
		Whist = 4, Rentz = 5, Totals = 6, Acool = 7
	};
	
	vector<Card*> cards;
	string name;
	int numberOfPlayer;
	Games game;
	Card *selectedCard;
	Player(string name, int numberOfPlayer);
	~Player();
};

