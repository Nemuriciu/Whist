#include "Card.h"

Card::Card()
{
}

Card::Card(int val, Color type)
{
	this->val = val;
	this->type = type;

	// val to string
	string valString;
	valString =  to_string(val);
	
	// type to string
	string typeString;
	switch (type)
	{
	case(Color:: Club):
		typeString = "Clubs";
		break;
	case (Color::Diamond):
		typeString = "Diamonds";
		break;
	case(Color::Spade):
		typeString = "Spades";
		break;
	case(Color::Heart):
		typeString = "Hearts";
		break;
	}

	this->pathImage = "Images/Cards/" + valString + "_of_" + typeString + ".png";
}

Card::~Card()
{
}
