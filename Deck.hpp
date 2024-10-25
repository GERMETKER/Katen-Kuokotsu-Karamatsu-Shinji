#ifndef _DECK_HPP_
#define _DECK_HPP_
#include <vector>
#include "Card.hpp"
class Deck
{
public:
	Deck()
	{
		std::vector<CardGame::Card> deck_ (smallDeck_);
	}

private:
	const int bigDeck_ = 52;
	const int smallDeck_ = 36;

	//githab владислава - varkmort
};

#endif

