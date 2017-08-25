#include <iostream>
#include <string>
using namespace std;

class Player;
<<<<<<< HEAD

=======
>>>>>>> 4961bab855d1310bcf2f8f384fef11e3d4a5ee94
public class Card
{
public:
	enum Color
	{
		Club = 0, Diamond = 1, Heart = 2, Spade = 3
	};

	int val;
	Color type;
	string pathImage;
	Player *player;

	Card();
	Card(int val, Color type);
	~Card();
};