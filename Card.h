#include <iostream>
#include <string>
using namespace std;

public class Card
{
public:
	enum Color
	{
		Club, Diamond, Heart, Spade
	};

	int val;
	Color type;
	string pathImage;

	Card();
	Card(int val, Color type);
	~Card();
};