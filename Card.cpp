#include "Card.h"

Card::Card()
{
}

Card::Card(int val, Color type)
{
	this->val = val;
	this->type = type;

	// val to string
	// type to string
	// this->pathImage = "Images/" val +"of..." + type + ".jpg";
	this->pathImage = pathImage;
}

Card::~Card()
{
}
