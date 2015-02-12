#ifndef ASTARSOLVE_H 
#define ASTARSOLVE_H
#include "avlTree.h"
#include "AVLGameState.h"
#include "Board.h"

class aStarSolve
{
private:
	AvlTree<AvlGameState> listOfBoards;

public:
	aStarSolve(Board initBoard);
	string solve();

};
#endif