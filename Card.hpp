#ifndef _CARD_HPP_
#define _CARD_HPP_

namespace CardGame
{
	enum Suit
	{
		clubs, diamonds, hards, spikes
	};

	enum Ranks
	{
		two = 2,
		three,
		four,
		five,
		six,
		seven,
		eight,
		nine,
		ten,
		jack,
		queen,
		king,
		ace
	};
	class Card
	{
	public:
		Card() = default;
		Card(Ranks rank, Suit suit)
		{
			rank_ = rank;
			suit_ = suit;
		}

		Suit GetSuit()const;
		Ranks GetRank()const;

	private:
		Suit suit_;
		Ranks rank_;
	};
}

#endif
