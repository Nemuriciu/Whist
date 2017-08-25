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
		typeString = "clubs";
		break;
	case (Color::Diamond):
		typeString = "diamonds";
		break;
	case(Color::Spade):
		typeString = "spades";
		break;
	case(Color::Heart):
		typeString = "hearts";
		break;
	}

	this->pathImage = "Images\\Cards\\" + valString + "_of_" + typeString + ".png";
}

Card::~Card()
{
}
