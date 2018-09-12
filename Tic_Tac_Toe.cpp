// Example program

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


void draw(char g1[3][3], char g2[3][3], char g3[3][3], char g4[3][3], char g5[3][3], char g6[3][3], char g7[3][3], char g8[3][3], char g9[3][3]) {
	system("cls");
	cout << "_" << g1[0][0] << "_|_" << g1[0][1] << "_|_" << g1[0][2] << "_ || _" << g2[0][0] << "_|_" << g2[0][1] << "_|_" << g2[0][2] << "_ || _" << g3[0][0] << "_|_" << g3[0][1] << "_|_" << g3[0][2] << "_" << endl;
	cout << "_" << g1[1][0] << "_|_" << g1[1][1] << "_|_" << g1[1][2] << "_ || _" << g2[1][0] << "_|_" << g2[1][1] << "_|_" << g2[1][2] << "_ || _" << g3[1][0] << "_|_" << g3[1][1] << "_|_" << g3[1][2] << "_" << endl;
	cout << " " << g1[2][0] << " | " << g1[2][1] << " | " << g1[2][2] << "  ||  " << g2[0][0] << " | " << g2[0][1] << " | " << g2[0][2] << "  ||  " << g3[0][0] << " | " << g3[0][1] << " | " << g3[0][2] << " " << endl;
	cout << "=========================================" << endl;
	cout << "_" << g4[0][0] << "_|_" << g4[0][1] << "_|_" << g4[0][2] << "_ || _" << g5[0][0] << "_|_" << g5[0][1] << "_|_" << g5[0][2] << "_ || _" << g6[0][0] << "_|_" << g6[0][1] << "_|_" << g6[0][2] << "_" << endl;
	cout << "_" << g4[1][0] << "_|_" << g4[1][1] << "_|_" << g4[1][2] << "_ || _" << g5[1][0] << "_|_" << g5[1][1] << "_|_" << g5[1][2] << "_ || _" << g6[1][0] << "_|_" << g6[1][1] << "_|_" << g6[1][2] << "_" << endl;
	cout << " " << g4[2][0] << " | " << g4[2][1] << " | " << g4[2][2] << "  ||  " << g5[2][0] << " | " << g5[2][1] << " | " << g5[2][2] << "  ||  " << g6[2][0] << " | " << g6[2][1] << " | " << g6[2][2] << " " << endl;
	cout << "=========================================" << endl;
	cout << "_" << g7[0][0] << "_|_" << g7[0][1] << "_|_" << g7[0][2] << "_ || _" << g8[0][0] << "_|_" << g8[0][1] << "_|_" << g8[0][2] << "_ || _" << g9[0][0] << "_|_" << g9[0][1] << "_|_" << g9[0][2] << "_" << endl;
	cout << "_" << g7[1][0] << "_|_" << g7[1][1] << "_|_" << g7[1][2] << "_ || _" << g8[1][0] << "_|_" << g8[1][1] << "_|_" << g8[1][2] << "_ || _" << g9[1][0] << "_|_" << g9[1][1] << "_|_" << g9[1][2] << "_" << endl;
	cout << " " << g7[2][0] << " | " << g7[2][1] << " | " << g7[2][2] << "  ||  " << g8[2][0] << " | " << g8[2][1] << " | " << g8[2][2] << "  ||  " << g9[2][0] << " | " << g9[2][1] << " | " << g9[2][2] << " " << endl;
}


int main() {
	// define variables
	char g1[3][3] = { {'_','_','_' }, { '_','_','_' }, {' ',' ',' '} };
	char g2[3][3] = { {'_','_','_' }, { '_','_','_' }, {' ',' ',' '} };
	char g3[3][3] = { {'_','_','_' }, { '_','_','_' }, {' ',' ',' '} };
	char g4[3][3] = { {'_','_','_' }, { '_','_','_' }, {' ',' ',' '} };
	char g5[3][3] = { {'_','_','_' }, { '_','_','_' }, {' ',' ',' '} };
	char g6[3][3] = { {'_','_','_' }, { '_','_','_' }, {' ',' ',' '} };
	char g7[3][3] = { {'_','_','_' }, { '_','_','_' }, {' ',' ',' '} };
	char g8[3][3] = { {'_','_','_' }, { '_','_','_' }, {' ',' ',' '} };
	char g9[3][3] = { {'_','_','_' }, { '_','_','_' }, {' ',' ',' '} };
	char letsPlay = 'Y';
	char letsPlay2 = 'Y';
	bool play = false;
	bool endGame = false;
	int quad = 0;
	int move = 0;
	// Ask if player wants to play
	while (!(play)) {
		cout << "Do you want to play? Y or N" << endl;
		cin >> letsPlay;
		switch (letsPlay)
		{
		case 'Y':
			cout << "great!" << endl;
			play = true;
			break;
		case 'N':
			cout << "Are you sure? Y or N" << endl;
			cin >> letsPlay2;
			switch (letsPlay2){
			case 'Y':
				cout << "ok bye!";
				break;
				return 0;
			case 'N':
				cout << "Sooo...." << endl;
				break;
			default:
				cout << "only input Y or N please" << endl;
				break;
			}
			break;
		default:
			cout << "only input Y or N please" << endl;
			break;
		}
	}
	// start game
	while (!(endGame)) {
		//draw game board
		draw(g1,g2,g3,g4,g5,g6,g7,g8,g9);

		cout << "choose a quadrant 1 - 9:";
		cin >> quad;
		cout << endl;
		switch (quad){
		case 1:

			default:
			break;
		}
		cout << "choose a move 1 - 9:";
		cin >> move;
		// player 1's turn

			// calculate win conditions

			// check for win

		// find where player 2 can move
			
			// if anywhere ask for proper selection

		// second players turn starts
			
			//second player pics move (1 - 9)

			// calculate win conditions

			// check for player 2 win conditions
	}
}