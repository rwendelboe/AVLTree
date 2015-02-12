#include "AVLGameState.h"

AvlGameState::AvlGameState(){
	state = 0;
	previousState = -1;
}
AvlGameState::AvlGameState(Board igameMakeUp, int icostSoFar, int istate, int ipreviousState, string imovesYouTook){

	gameMakeUP = igameMakeUp;
	expectedCost = calculate();
	costSoFar = icostSoFar;
	movesYouTook = imovesYouTook;
	state = istate;
	previousState = ipreviousState;
}
AvlGameState::AvlGameState(AvlGameState & obj){
	gameMakeUP = obj.gameMakeUP;
	costSoFar = obj.costSoFar;
	expectedCost = obj.expectedCost;
	movesYouTook = obj.movesYouTook;
	state = obj.state;
	previousState = obj.previousState;
}
int AvlGameState::calculate(){
	int total = 0;

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			int temp = gameMakeUP.board[i][j];
			switch ( temp){
			case 1:
				if (i == 0 && j == 0){
					total += 0;
				}
				else if (i != 0 && j == 0 ){
					total += 1;
				}
				else if (i == 0 && j != 0){
					total += 1;
				}
				else {
					total += 2;
				}
				break;
			case 2:
				if (i == 0 && j == 1){
					total += 0;
				}
				else if (i != 0 && j == 1){
					total += 1;
				}
				else if (i == 0 && j != 1){
					total += 1;
				}
				else {
					total += 2;
				}
				break;
			case 3:
				if (i == 0 && j == 2){
					total += 0;
				}
				else if (i != 0 && j == 2){
					total += 1;
				}
				else if (i == 0 && j != 2){
					total += 1;
				}
				else {
					total += 2;
				}
				break;
			case 4:
				if (i == 1 && j == 0){
					total += 0;
				}
				else if (i != 1 && j == 0){
					total += 1;
				}
				else if (i == 1 && j != 0){
					total += 1;
				}
				else {
					total += 2;
				}
				break;
			case 5:
				if (i == 1 && j == 1){
					total += 0;
				}
				else if (i != 1 && j == 1){
					total += 1;
				}
				else if (i == 1 && j != 1){
					total += 1;
				}
				else {
					total += 2;
				}
				break;
			case 6:
				if (i == 1 && j == 2){
					total += 0;
				}
				else if (i != 1 && j == 2){
					total += 1;
				}
				else if (i == 1 && j != 2){
					total += 1;
				}
				else {
					total += 2;
				}
				break;
			case 7:
				if (i == 2 && j == 0){
					total += 0;
				}
				else if (i != 2 && j == 0){
					total += 1;
				}
				else if (i == 2 && j != 0){
					total += 1;
				}
				else {
					total += 2;
				}
				break;
			case 8:
				if (i == 2 && j == 1){
					total += 0;
				}
				else if (i != 2 && j == 1){
					total += 1;
				}
				else if (i == 2 && j != 1){
					total += 1;
				}
				else {
					total += 2;
				}
				break;
			case 9:
				if (i == 2 && j == 2){
					total += 0;
				}
				else if (i != 2 && j == 2){
					total += 1;
				}
				else if (i == 2 && j != 2){
					total += 1;
				}
				else {
					total += 2;
				}
				break;
			}
		}
		
	}
	return total / 3;
}
string AvlGameState::toString() const {
	stringstream ss;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			ss << gameMakeUP.board[i][j] << " ";
		ss << endl;
	}
	
	return ss.str();
	 
}
bool AvlGameState::operator< (const AvlGameState& rhs){
	return expectedCost < rhs.expectedCost;
}
bool AvlGameState::operator>(const AvlGameState& rhs){
	return expectedCost > rhs.expectedCost ;
}
bool AvlGameState::operator==(const AvlGameState& rhs){
	return expectedCost == rhs.expectedCost;
}
ostream&  operator<<(ostream& ss, const AvlGameState& gs) {
	ss << gs.toString() << endl;
	return ss;
}
