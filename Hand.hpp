#ifndef _HAND_HPP_
#define _HAND_HPP_
#include <vector>
#include "Card.hpp"
class Hand
{
public:
	Hand()
	{}
	
private:
	std::vector<CardGame::Card> hand_;
};


#endif

