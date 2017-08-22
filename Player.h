#include "Card.h"
#include <vector>
#include <string>

using namespace std;

class Player
{
public:
	enum Games
	{
		King_of_Hearts, Ten_of_Clubs, Queens, Diamonds, Whist, Rentz, Totals, Acool
	};
	
	vector<Card*> cards;
	string name;
	Player(string name);
	~Player();
};

