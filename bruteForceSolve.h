#ifndef BRUTEFORCESOLVE_H 
#define BRUTEFORCESOLVE_H
#include "Queue.h"
#include "Board.h"

class bruteForceSolve
{
	private:
		Queue<Node<Board>> q;
		Board initBoard;
		Board goalBoard;
		int gameState;
		string movesYouTook;

	public:
		bruteForceSolve(Board initBoard);
		string solve();

};
#endif