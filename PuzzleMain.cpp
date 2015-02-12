#include <iostream>
#include <assert.h>
#include <fstream>
#include "Board.h"
#include "Queue.h"
#include "bruteForceSolve.h"
#include "aStarSolve.h"
#include "avlTree.h"

using namespace std;

int main(){

	char q;
	ofstream myfile;
	myfile.open("output.txt");
	
	//AvlTree<int> input1;
	////Add: 1 3 5 7 9 11 2 4 8  (now print tree)
	//input1.insert(1);
	//input1.insert(3);
	//input1.insert(5);
	//input1.insert(7);
	//input1.insert(9);
	//input1.insert(11);
	//input1.insert(2);
	//input1.insert(4);
	//input1.insert(8);
	////cout<< input1.findMin();

	//cout << input1.toString();
	////Remove 7 9(now print tree) 
	//input1.remove(7);
	//input1.remove(9);
	//cout << input1.toString();
	////Add 50 30 15 18 (now print tree)
	//input1.insert(50);
	//input1.insert(30);
	//input1.insert(15);
	//input1.insert(18);
	//cout<< input1.toString();
	////Remove Min (now print tree)
	//cout << input1.removeMin();
	//cout << input1.toString();
	////Remove Min (now print tree)
	//cout << input1.removeMin();
	//cout << input1.toString();
	////Remove Min (now print tree)
	//cout << input1.removeMin();
	//cout << input1.toString();
	////Add 17(now print tree)
	//input1.insert(17);
	//cout << input1.toString();

	//input 1
	Board input1;
	
	input1.board[0][0] = 1;
	input1.board[0][1] = 2;
	input1.board[0][2] = 3;
	input1.board[1][0] = 6;
	input1.board[1][1] = 4;
	input1.board[1][2] = 5;
	input1.board[2][0] = 9;
	input1.board[2][1] = 7;
	input1.board[2][2] = 8;
	
	//cout << "Testing Input 1" << endl;
	//cout << input1.toString() << endl;

	//aStarSolve g1(input1);
	//
	//cout<< g1.solve() << endl;
	//cout << "You Win!!! Original Board was " << endl;
	//cout << input1.toString() << endl;

	//to write to a file uncomment
	myfile << "Testing Input 1" << endl;
	myfile << input1.toString() << endl;

	aStarSolve g1(input1);

	myfile<< g1.solve() << endl;
	myfile << "You Win!!! Original Board was " << endl;
	myfile << input1.toString() << endl;


	////input 2
	//Board input2;
	//
	//input2.board[0][0] = 2;
	//input2.board[0][1] = 1;
	//input2.board[0][2] = 8;
	//input2.board[1][0] = 9;
	//input2.board[1][1] = 4;
	//input2.board[1][2] = 7;
	//input2.board[2][0] = 3;
	//input2.board[2][1] = 6;
	//input2.board[2][2] = 5;
	//cout << "Testing input 2 aStarSolve" << endl;
	//cout << input2.toString() << endl;

	//aStarSolve g2(input2);

	//cout << g2.solve() << endl;

	//cout << "You Win!!! Original Board was " << endl;
	//cout << input2.toString() << endl;

	////to write to a file
	////myfile << "Testing input 2 aStarSolve" << endl;
	////myfile<< input2.toString() << endl;

	////aStarSolve g2(input2);

	////myfile << g2.solve() << endl;
	////myfile << "You Win!!! Original Board was " << endl;
	////myfile << input2.toString() << endl;

	//// input 3 hardcoded in the aStar solve is much better
	//Board input3;

	//input3.board[0][0] = 6;
	//input3.board[0][1] = 7;
	//input3.board[0][2] = 2;
	//input3.board[1][0] = 1;
	//input3.board[1][1] = 5;
	//input3.board[1][2] = 9;
	//input3.board[2][0] = 3;
	//input3.board[2][1] = 4;
	//input3.board[2][2] = 8;

	//cout << "Testing Input 3 Using A Start Solve and Brute Force Solve" << endl;
	//cout << "A Star Solve" << endl;
	//cout << input3.toString() << endl;

	//aStarSolve g3part2(input3);

	//cout << g3part2.solve() << endl;

	//cout << "You Win!!! Original Board was " << endl;
	//cout << input3.toString() << endl;

	//cout << "Testing Input 3 Using A Start Solve and Brute Force Solve" << endl;
	//cout << "Brute Force Solve" << endl;
	//cout << input3.toString() << endl;

	//bruteForceSolve g3(input3);

	//cout << g3.solve() << endl;

	//cout << "You Win!!! Original Board was " << endl;
	//cout << input3.toString() << endl;

	////To write to a file
	////myfile << "Testing Input 3 Using A Start Solve and Brute Force Solve" << endl;
	////myfile << "A Star Solve" << endl;
	////myfile << input3.toString() << endl;

	////aStarSolve g3part2(input3);

	////myfiel << g3part2.solve() << endl;

	////myfile << "You Win!!! Original Board was " << endl;
	////myfile << input3.toString() << endl;

	////myfile << "Testing Input 3 Using A Start Solve and Brute Force Solve" << endl;
	////myfile << "Brute Force Solve" << endl;
	////myfile << input3.toString() << endl;

	////bruteForceSolve g3(input3);

	////myfile << g3.solve() << endl;

	////myfile << "You Win!!! Original Board was " << endl;
	////myfile << input3.toString() << endl;


	////input 4 Jumbled
	//Board input4;
	//input4.makeBoard(5);
	

	/*cout << input4.toString() << endl;

	aStarSolve g4(input4);

	cout << g4.solve() << endl;

	cout << "You Win!!! Original Board was " << endl;
	cout << input4.toString() << endl;
	*/
	/*aStarSolve g4(input4);

	myfile << g4.solve() << endl;

	myfile << "You Win!!! Original Board was " << endl;
	myfile << input4.toString() << endl;*/

	myfile.close();
	cin >> q;
	return 0;
}