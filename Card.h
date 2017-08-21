#include<iostream>
#include<string>
using namespace std;


class Card
{
public:
	enum Color
	{
		Club, Diamond, Heart, Spade
	};

	int val;
	Color type;
	Card();
	Card(int val, Color type);
	~Card();
};

