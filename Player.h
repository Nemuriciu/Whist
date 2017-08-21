#include "Card.h"
#include <vector>
#include <string>

using namespace std;

class Player
{
public:
	vector<Card*> cards;
	string name;
	Player(string name);
	~Player();
};

