#ifndef AVLGAMESTATE_H 
#define AVLGAMESTATE_H
#include "avlTree.h"
#include "Board.h"

struct AvlGameState
{
	Board gameMakeUP;
	int expectedCost;
	int costSoFar;
	int state;
	int previousState;
	string movesYouTook;
	AvlGameState();
	AvlGameState(Board gameMakeUp, int costSoFar, int state, int previousState, string movesYouTook);
	int calculate();
	string toString() const;
	AvlGameState(AvlGameState & obj);
	bool operator< ( const AvlGameState& rhs);
	bool operator> ( const AvlGameState& rhs);
	bool operator== ( const AvlGameState& rhs);
	friend ostream&  operator<<(ostream& ss, const AvlGameState& gs);
};

ostream&  operator<<(ostream& ss, const AvlGameState& gs);
#endif