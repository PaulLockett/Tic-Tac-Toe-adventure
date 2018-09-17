// Example program

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


void intro() {
	char letsPlay = 'Y';
	char letsPlay2 = 'Y';
	bool play = false;

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

			switch (letsPlay2) {
			case 'Y':
				cout << "ok fine but I'm goint to ask again anyway.";
				break;
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
}

void setup(string &player1Name, string &player2Name, char &player1, char &player2, char &currentPlayer) {
	char input;
	bool x = true;

	cout << "What is your name Player 1: ";
	cin >> player1Name;
	cout << endl;

	cout << "What is your name Player 2: ";
	cin >> player2Name;
	cout << endl;
	while (x) {
		cout << player1Name << " do you want X or O";
		cin >> input;
		if (input != 'X' && input != 'O') {
			cout << "please input an X or O";
		}
		else {
			player1 = input;
			if (input == 'X') {
				player2 = 'O';
			}
			else if (input == 'O') {
				player2 = 'X';
			}
			x = false;
		}
	}

	currentPlayer = player1;
}

void draw(char g1[3][3], char g2[3][3], char g3[3][3], char g4[3][3], char g5[3][3], char g6[3][3], char g7[3][3], char g8[3][3], char g9[3][3]) {
	system("cls");
	cout << "_" << g1[0][0] << "_|_" << g1[0][1] << "_|_" << g1[0][2] << "_ || _" << g2[0][0] << "_|_" << g2[0][1] << "_|_" << g2[0][2] << "_ || _" << g3[0][0] << "_|_" << g3[0][1] << "_|_" << g3[0][2] << "_" << endl;
	cout << "_" << g1[1][0] << "_|_" << g1[1][1] << "_|_" << g1[1][2] << "_ || _" << g2[1][0] << "_|_" << g2[1][1] << "_|_" << g2[1][2] << "_ || _" << g3[1][0] << "_|_" << g3[1][1] << "_|_" << g3[1][2] << "_" << endl;
	cout << " " << g1[2][0] << " | " << g1[2][1] << " | " << g1[2][2] << "  ||  " << g2[2][0] << " | " << g2[2][1] << " | " << g2[2][2] << "  ||  " << g3[2][0] << " | " << g3[2][1] << " | " << g3[2][2] << " " << endl;
	cout << "=========================================" << endl;
	cout << "_" << g4[0][0] << "_|_" << g4[0][1] << "_|_" << g4[0][2] << "_ || _" << g5[0][0] << "_|_" << g5[0][1] << "_|_" << g5[0][2] << "_ || _" << g6[0][0] << "_|_" << g6[0][1] << "_|_" << g6[0][2] << "_" << endl;
	cout << "_" << g4[1][0] << "_|_" << g4[1][1] << "_|_" << g4[1][2] << "_ || _" << g5[1][0] << "_|_" << g5[1][1] << "_|_" << g5[1][2] << "_ || _" << g6[1][0] << "_|_" << g6[1][1] << "_|_" << g6[1][2] << "_" << endl;
	cout << " " << g4[2][0] << " | " << g4[2][1] << " | " << g4[2][2] << "  ||  " << g5[2][0] << " | " << g5[2][1] << " | " << g5[2][2] << "  ||  " << g6[2][0] << " | " << g6[2][1] << " | " << g6[2][2] << " " << endl;
	cout << "=========================================" << endl;
	cout << "_" << g7[0][0] << "_|_" << g7[0][1] << "_|_" << g7[0][2] << "_ || _" << g8[0][0] << "_|_" << g8[0][1] << "_|_" << g8[0][2] << "_ || _" << g9[0][0] << "_|_" << g9[0][1] << "_|_" << g9[0][2] << "_" << endl;
	cout << "_" << g7[1][0] << "_|_" << g7[1][1] << "_|_" << g7[1][2] << "_ || _" << g8[1][0] << "_|_" << g8[1][1] << "_|_" << g8[1][2] << "_ || _" << g9[1][0] << "_|_" << g9[1][1] << "_|_" << g9[1][2] << "_" << endl;
	cout << " " << g7[2][0] << " | " << g7[2][1] << " | " << g7[2][2] << "  ||  " << g8[2][0] << " | " << g8[2][1] << " | " << g8[2][2] << "  ||  " << g9[2][0] << " | " << g9[2][1] << " | " << g9[2][2] << " " << endl;
}

void togglePlayer(char &player1, char &player2, char &currentPlayer) {

	if (currentPlayer == player1)
		currentPlayer = player2;
	else
		currentPlayer = player1;
}

void checkWins(int &quad, char &player1, char &player2, char &currentPlayer, string &player1Name, string &player2Name ) {

}
/*
void makeMove(string player1Name, string player2Name, char player1, char player2, char currentPlayer, char g1[3][3], char g2[3][3], char g3[3][3], char g4[3][3], char g5[3][3], char g6[3][3], char g7[3][3], char g8[3][3], char g9[3][3]) {
	int quad = 0;
	int move = 0;
	if (currentPlayer == player1) {
		cout << player1Name << "choose a quadrant 1 - 9:";
		cin >> quad;
		cout << endl;
		if () {

		}
		cout << player1Name << "choose a move 1 - 9:";
		cin >> move;
	}
	else {
		cout << player2Name << "choose a quadrant 1 - 9:";
		cin >> quad;
		cout << endl;
		switch (quad) {
		case 1:

		default:
			break;
		}
		cout << player2Name << "choose a move 1 - 9:";
		cin >> move;
	}
}
*/
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
	bool endGame = false;
	bool goodSelect = false;
	bool q1Win = false;
	bool q2Win = false;
	bool q3Win = false;
	bool q4Win = false;
	bool q5Win = false;
	bool q6Win = false;
	bool q7Win = false;
	bool q8Win = false;
	bool q9Win = false;
	string player1Name;
	string player2Name;
	char player1;
	char player2;
	char currentPlayer;
	int quad = 0;
	int move = 0;
	
	// start game
	intro();

	setup(player1Name, player2Name, player1, player2, currentPlayer);

	while (!(endGame)) {
		//draw game board
		draw(g1,g2,g3,g4,g5,g6,g7,g8,g9);

		// ask for player input
		while (!(goodSelect)) {
			if (currentPlayer == player1) {
				if (quad == 0) {
					cout << player1Name << " choose a quadrant 1 - 9:";
					cin >> quad;
					cout << endl;
				}
				if (quad == 1 && !(q1Win)) {
					goodSelect = true;
					cout << player1Name << " choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g1[0][0] = player1;
					}
					else if (move == 2) {
						g1[0][1] = player1;
					}
					else if (move == 3) {
						g1[0][2] = player1;
					}
					else if (move == 4) {
						g1[1][0] = player1;
					}
					else if (move == 5) {
						g1[1][1] = player1;
					}
					else if (move == 6) {
						g1[1][2] = player1;
					}
					else if (move == 7) {
						g1[2][0] = player1;
					}
					else if (move == 8) {
						g1[2][1] = player1;
					}
					else if (move == 9) {
						g1[2][2] = player1;
					}
				}
				else if (quad == 2 && !(q2Win)) {
					goodSelect = true;
					cout << player1Name << "choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g2[0][0] = player1;
					}
					else if (move == 2) {
						g2[0][1] = player1;
					}
					else if (move == 3) {
						g2[0][2] = player1;
					}
					else if (move == 4) {
						g2[1][0] = player1;
					}
					else if (move == 5) {
						g2[1][1] = player1;
					}
					else if (move == 6) {
						g2[1][2] = player1;
					}
					else if (move == 7) {
						g2[2][0] = player1;
					}
					else if (move == 8) {
						g2[2][1] = player1;
					}
					else if (move == 9) {
						g2[2][2] = player1;
					}
				}
				else if (quad == 3 && !(q3Win)) {
					goodSelect = true;
					cout << player1Name << "choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g3[0][0] = player1;
					}
					else if (move == 2) {
						g3[0][1] = player1;
					}
					else if (move == 3) {
						g3[0][2] = player1;
					}
					else if (move == 4) {
						g3[1][0] = player1;
					}
					else if (move == 5) {
						g3[1][1] = player1;
					}
					else if (move == 6) {
						g3[1][2] = player1;
					}
					else if (move == 7) {
						g3[2][0] = player1;
					}
					else if (move == 8) {
						g3[2][1] = player1;
					}
					else if (move == 9) {
						g3[2][2] = player1;
					}
				}
				else if (quad == 4 && !(q4Win)) {
					goodSelect = true;
					cout << player1Name << "choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g4[0][0] = player1;
					}
					else if (move == 2) {
						g4[0][1] = player1;
					}
					else if (move == 3) {
						g4[0][2] = player1;
					}
					else if (move == 4) {
						g4[1][0] = player1;
					}
					else if (move == 5) {
						g4[1][1] = player1;
					}
					else if (move == 6) {
						g4[1][2] = player1;
					}
					else if (move == 7) {
						g4[2][0] = player1;
					}
					else if (move == 8) {
						g4[2][1] = player1;
					}
					else if (move == 9) {
						g4[2][2] = player1;
					}
				}
				else if (quad == 5 && !(q5Win)) {
					goodSelect = true;
					cout << player1Name << "choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g5[0][0] = player1;
					}
					else if (move == 2) {
						g5[0][1] = player1;
					}
					else if (move == 3) {
						g5[0][2] = player1;
					}
					else if (move == 4) {
						g5[1][0] = player1;
					}
					else if (move == 5) {
						g5[1][1] = player1;
					}
					else if (move == 6) {
						g5[1][2] = player1;
					}
					else if (move == 7) {
						g5[2][0] = player1;
					}
					else if (move == 8) {
						g5[2][1] = player1;
					}
					else if (move == 9) {
						g5[2][2] = player1;
					}
				}
				else if (quad == 6 && !(q6Win)) {
					goodSelect = true;
					cout << player1Name << "choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g6[0][0] = player1;
					}
					else if (move == 2) {
						g6[0][1] = player1;
					}
					else if (move == 3) {
						g6[0][2] = player1;
					}
					else if (move == 4) {
						g6[1][0] = player1;
					}
					else if (move == 5) {
						g6[1][1] = player1;
					}
					else if (move == 6) {
						g6[1][2] = player1;
					}
					else if (move == 7) {
						g6[2][0] = player1;
					}
					else if (move == 8) {
						g6[2][1] = player1;
					}
					else if (move == 9) {
						g6[2][2] = player1;
					}
				}
				else if (quad == 7 && !(q7Win)) {
					goodSelect = true;
					cout << player1Name << "choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g7[0][0] = player1;
					}
					else if (move == 2) {
						g7[0][1] = player1;
					}
					else if (move == 3) {
						g7[0][2] = player1;
					}
					else if (move == 4) {
						g7[1][0] = player1;
					}
					else if (move == 5) {
						g7[1][1] = player1;
					}
					else if (move == 6) {
						g7[1][2] = player1;
					}
					else if (move == 7) {
						g7[2][0] = player1;
					}
					else if (move == 8) {
						g7[2][1] = player1;
					}
					else if (move == 9) {
						g7[2][2] = player1;
					}
				}
				else if (quad == 8 && !(q8Win)) {
					goodSelect = true;
					cout << player1Name << "choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g8[0][0] = player1;
					}
					else if (move == 2) {
						g8[0][1] = player1;
					}
					else if (move == 3) {
						g8[0][2] = player1;
					}
					else if (move == 4) {
						g8[1][0] = player1;
					}
					else if (move == 5) {
						g8[1][1] = player1;
					}
					else if (move == 6) {
						g8[1][2] = player1;
					}
					else if (move == 7) {
						g8[2][0] = player1;
					}
					else if (move == 8) {
						g8[2][1] = player1;
					}
					else if (move == 9) {
						g8[2][2] = player1;
					}
				}
				else if (quad == 9 && !(q9Win)) {
					goodSelect = true;
					cout << player1Name << "choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g9[0][0] = player1;
					}
					else if (move == 2) {
						g9[0][1] = player1;
					}
					else if (move == 3) {
						g9[0][2] = player1;
					}
					else if (move == 4) {
						g9[1][0] = player1;
					}
					else if (move == 5) {
						g9[1][1] = player1;
					}
					else if (move == 6) {
						g9[1][2] = player1;
					}
					else if (move == 7) {
						g9[2][0] = player1;
					}
					else if (move == 8) {
						g9[2][1] = player1;
					}
					else if (move == 9) {
						g9[2][2] = player1;
					}
				}
				else {
				cout << "That quadrent is already won pick another" << endl;
				}
			}
			else if (currentPlayer == player2) {
				if (quad == 0) {
					cout << player2Name << " choose a quadrant 1 - 9:";
					cin >> quad;
					cout << endl;
				}
				if (quad == 1 && !(q1Win)) {
					goodSelect = true;
					cout << player2Name << " choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g1[0][0] = player2;
					}
					else if (move == 2) {
						g1[0][1] = player2;
					}
					else if (move == 3) {
						g1[0][2] = player2;
					}
					else if (move == 4) {
						g1[1][0] = player2;
					}
					else if (move == 5) {
						g1[1][1] = player2;
					}
					else if (move == 6) {
						g1[1][2] = player2;
					}
					else if (move == 7) {
						g1[2][0] = player2;
					}
					else if (move == 8) {
						g1[2][1] = player2;
					}
					else if (move == 9) {
						g1[2][2] = player2;
					}
				}
				else if (quad == 2 && !(q2Win)) {
					goodSelect = true;
					cout << player2Name << "choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g2[0][0] = player2;
					}
					else if (move == 2) {
						g2[0][1] = player2;
					}
					else if (move == 3) {
						g2[0][2] = player2;
					}
					else if (move == 4) {
						g2[1][0] = player2;
					}
					else if (move == 5) {
						g2[1][1] = player2;
					}
					else if (move == 6) {
						g2[1][2] = player2;
					}
					else if (move == 7) {
						g2[2][0] = player2;
					}
					else if (move == 8) {
						g2[2][1] = player2;
					}
					else if (move == 9) {
						g2[2][2] = player2;
					}
				}
				else if (quad == 3 && !(q3Win)) {
					goodSelect = true;
					cout << player2Name << "choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g3[0][0] = player2;
					}
					else if (move == 2) {
						g3[0][1] = player2;
					}
					else if (move == 3) {
						g3[0][2] = player2;
					}
					else if (move == 4) {
						g3[1][0] = player2;
					}
					else if (move == 5) {
						g3[1][1] = player2;
					}
					else if (move == 6) {
						g3[1][2] = player2;
					}
					else if (move == 7) {
						g3[2][0] = player2;
					}
					else if (move == 8) {
						g3[2][1] = player2;
					}
					else if (move == 9) {
						g3[2][2] = player2;
					}
				}
				else if (quad == 4 && !(q4Win)) {
					goodSelect = true;
					cout << player2Name << "choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g4[0][0] = player2;
					}
					else if (move == 2) {
						g4[0][1] = player2;
					}
					else if (move == 3) {
						g4[0][2] = player2;
					}
					else if (move == 4) {
						g4[1][0] = player2;
					}
					else if (move == 5) {
						g4[1][1] = player2;
					}
					else if (move == 6) {
						g4[1][2] = player2;
					}
					else if (move == 7) {
						g4[2][0] = player2;
					}
					else if (move == 8) {
						g4[2][1] = player2;
					}
					else if (move == 9) {
						g4[2][2] = player2;
					}
				}
				else if (quad == 5 && !(q5Win)) {
					goodSelect = true;
					cout << player2Name << "choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g5[0][0] = player2;
					}
					else if (move == 2) {
						g5[0][1] = player2;
					}
					else if (move == 3) {
						g5[0][2] = player2;
					}
					else if (move == 4) {
						g5[1][0] = player2;
					}
					else if (move == 5) {
						g5[1][1] = player2;
					}
					else if (move == 6) {
						g5[1][2] = player2;
					}
					else if (move == 7) {
						g5[2][0] = player2;
					}
					else if (move == 8) {
						g5[2][1] = player2;
					}
					else if (move == 9) {
						g5[2][2] = player2;
					}
				}
				else if (quad == 6 && !(q6Win)) {
					goodSelect = true;
					cout << player2Name << "choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g6[0][0] = player2;
					}
					else if (move == 2) {
						g6[0][1] = player2;
					}
					else if (move == 3) {
						g6[0][2] = player2;
					}
					else if (move == 4) {
						g6[1][0] = player2;
					}
					else if (move == 5) {
						g6[1][1] = player2;
					}
					else if (move == 6) {
						g6[1][2] = player2;
					}
					else if (move == 7) {
						g6[2][0] = player2;
					}
					else if (move == 8) {
						g6[2][1] = player2;
					}
					else if (move == 9) {
						g6[2][2] = player2;
					}
				}
				else if (quad == 7 && !(q7Win)) {
					goodSelect = true;
					cout << player2Name << "choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g7[0][0] = player2;
					}
					else if (move == 2) {
						g7[0][1] = player2;
					}
					else if (move == 3) {
						g7[0][2] = player2;
					}
					else if (move == 4) {
						g7[1][0] = player2;
					}
					else if (move == 5) {
						g7[1][1] = player2;
					}
					else if (move == 6) {
						g7[1][2] = player2;
					}
					else if (move == 7) {
						g7[2][0] = player2;
					}
					else if (move == 8) {
						g7[2][1] = player2;
					}
					else if (move == 9) {
						g7[2][2] = player2;
					}
				}
				else if (quad == 8 && !(q8Win)) {
					goodSelect = true;
					cout << player2Name << "choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g8[0][0] = player2;
					}
					else if (move == 2) {
						g8[0][1] = player2;
					}
					else if (move == 3) {
						g8[0][2] = player2;
					}
					else if (move == 4) {
						g8[1][0] = player2;
					}
					else if (move == 5) {
						g8[1][1] = player2;
					}
					else if (move == 6) {
						g8[1][2] = player2;
					}
					else if (move == 7) {
						g8[2][0] = player2;
					}
					else if (move == 8) {
						g8[2][1] = player2;
					}
					else if (move == 9) {
						g8[2][2] = player2;
					}
				}
				else if (quad == 9 && !(q9Win)) {
					goodSelect = true;
					cout << player2Name << "choose a move 1 - 9:";
					cin >> move;

					if (move == 1) {
						g9[0][0] = player2;
					}
					else if (move == 2) {
						g9[0][1] = player2;
					}
					else if (move == 3) {
						g9[0][2] = player2;
					}
					else if (move == 4) {
						g9[1][0] = player2;
					}
					else if (move == 5) {
						g9[1][1] = player2;
					}
					else if (move == 6) {
						g9[1][2] = player2;
					}
					else if (move == 7) {
						g9[2][0] = player2;
					}
					else if (move == 8) {
						g9[2][1] = player2;
					}
					else if (move == 9) {
						g9[2][2] = player2;
					}
				}
				else {
				cout << "That quadrent is already won pick another" << endl;
				}
			}
		}
		goodSelect = false;

		// swich players
		togglePlayer(player1, player2, currentPlayer);
	}
}