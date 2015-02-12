#include "aStarSolve.h"


aStarSolve::aStarSolve(Board start)
{
	AvlGameState temp = AvlGameState(start, 0, 0, -1, "");
	listOfBoards.insert(temp);
}
string aStarSolve::solve(){
	AvlGameState goalBoard;
	goalBoard.gameMakeUP.makeBoard();
	AvlGameState current = listOfBoards.removeMin();

	while (true){
		int totalCost = 0;
		for (int i = 0; i <= 11; i++){
			stringstream ss;
			AvlGameState temp = current;
			if (temp.gameMakeUP == goalBoard.gameMakeUP){
				ss << endl << temp.gameMakeUP.toString();
				return temp.movesYouTook + ss.str();
			}
			temp.gameMakeUP.previousBoard.push_back(temp.gameMakeUP);
			temp.gameMakeUP.move(i);

			temp.expectedCost = temp.calculate();
	
			temp.movesYouTook += ss.str();
			temp.state++;
			temp.previousState = current.state;
			temp.costSoFar++;
			bool found = false;
			for (int i = 0; i < temp.gameMakeUP.previousBoard.size(); i++){
				
				if (temp.gameMakeUP.previousBoard[i] == temp.gameMakeUP){
					found = true;
					break;
				}
			}
			if (!found){
				listOfBoards.insert(temp);
			}
			cout << "\nState " << temp.state << " From State " << temp.previousState << " " << temp.gameMakeUP.move(i)<< " " << totalCost << ": [" << temp.expectedCost << "]" << endl << temp.gameMakeUP.toString();
		}
		current = listOfBoards.removeMin();	
	}
}


