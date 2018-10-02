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

void setup(string &player1Name, string &player2Name, string &currentPlayerName, char &player1, char &player2, char &currentPlayer) {
	char input;
	bool x = true;

	cout << "What is your name Player 1: ";
	cin >> player1Name;
	cout << endl;

	cout << "What is your name Player 2: ";
	cin >> player2Name;
	cout << endl;
	while (x) {
		cout << player1Name << " do you want X or O:";
		cin >> input;
		if (input != 'X' && input != 'O') {
			cout << endl;
			cout << "please input an X or O:";
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
	currentPlayerName = player1Name;
}

void draw(char g[10][3][3]) {
	system("cls");
	cout << "_" << g[1][0][0] << "_|_" << g[1][0][1] << "_|_" << g[1][0][2] << "_ || _" << g[2][0][0] << "_|_" << g[2][0][1] << "_|_" << g[2][0][2] << "_ || _" << g[3][0][0] << "_|_" << g[3][0][1] << "_|_" << g[3][0][2] << "_" << endl;
	cout << "_" << g[1][1][0] << "_|_" << g[1][1][1] << "_|_" << g[1][1][2] << "_ || _" << g[2][1][0] << "_|_" << g[2][1][1] << "_|_" << g[2][1][2] << "_ || _" << g[3][1][0] << "_|_" << g[3][1][1] << "_|_" << g[3][1][2] << "_" << endl;
	cout << " " << g[1][2][0] << " | " << g[1][2][1] << " | " << g[1][2][2] << "  ||  " << g[2][2][0] << " | " << g[2][2][1] << " | " << g[2][2][2] << "  ||  " << g[3][2][0] << " | " << g[3][2][1] << " | " << g[3][2][2] << " " << endl;
	cout << "=========================================" << endl;
	cout << "_" << g[4][0][0] << "_|_" << g[4][0][1] << "_|_" << g[4][0][2] << "_ || _" << g[5][0][0] << "_|_" << g[5][0][1] << "_|_" << g[5][0][2] << "_ || _" << g[6][0][0] << "_|_" << g[6][0][1] << "_|_" << g[6][0][2] << "_" << endl;
	cout << "_" << g[4][1][0] << "_|_" << g[4][1][1] << "_|_" << g[4][1][2] << "_ || _" << g[5][1][0] << "_|_" << g[5][1][1] << "_|_" << g[5][1][2] << "_ || _" << g[6][1][0] << "_|_" << g[6][1][1] << "_|_" << g[6][1][2] << "_" << endl;
	cout << " " << g[4][2][0] << " | " << g[4][2][1] << " | " << g[4][2][2] << "  ||  " << g[5][2][0] << " | " << g[5][2][1] << " | " << g[5][2][2] << "  ||  " << g[6][2][0] << " | " << g[6][2][1] << " | " << g[6][2][2] << " " << endl;
	cout << "=========================================" << endl;
	cout << "_" << g[7][0][0] << "_|_" << g[7][0][1] << "_|_" << g[7][0][2] << "_ || _" << g[8][0][0] << "_|_" << g[8][0][1] << "_|_" << g[8][0][2] << "_ || _" << g[9][0][0] << "_|_" << g[9][0][1] << "_|_" << g[9][0][2] << "_" << endl;
	cout << "_" << g[7][1][0] << "_|_" << g[7][1][1] << "_|_" << g[7][1][2] << "_ || _" << g[8][1][0] << "_|_" << g[8][1][1] << "_|_" << g[8][1][2] << "_ || _" << g[9][1][0] << "_|_" << g[9][1][1] << "_|_" << g[9][1][2] << "_" << endl;
	cout << " " << g[7][2][0] << " | " << g[7][2][1] << " | " << g[7][2][2] << "  ||  " << g[8][2][0] << " | " << g[8][2][1] << " | " << g[8][2][2] << "  ||  " << g[9][2][0] << " | " << g[9][2][1] << " | " << g[9][2][2] << " " << endl;
}

void togglePlayer(char &player1, char &player2, char &currentPlayer, string &player1Name, string &player2Name, string &currentPlayerName) {

	if (currentPlayer == player1) {
		currentPlayer = player2;
		currentPlayerName = player2Name;
	}
	else {
		currentPlayer = player1;
		currentPlayerName = player1Name;
	}
}
/**
void checkWins(int &quad, char &player1, char &player2, char &currentPlayer, string &player1Name, string &player2Name ) {
}
*/
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
	char g[10][3][3] = { { {'_', '_', '_' }, { '_','_','_' }, { ' ',' ',' ' } }, { {'_','_','_' }, { '_','_','_' }, {' ',' ',' '} },
		{ {'_', '_', '_' }, { '_','_','_' }, { ' ',' ',' ' } },
		{ {'_', '_', '_' }, { '_','_','_' }, { ' ',' ',' ' } },
		{ {'_', '_', '_' }, { '_','_','_' }, { ' ',' ',' ' } },
		{ {'_', '_', '_' }, { '_','_','_' }, { ' ',' ',' ' } },
		{ {'_', '_', '_' }, { '_','_','_' }, { ' ',' ',' ' } },
		{ {'_', '_', '_' }, { '_','_','_' }, { ' ',' ',' ' } },
		{ {'_', '_', '_' }, { '_','_','_' }, { ' ',' ',' ' } },
		{ {'_', '_', '_' }, { '_','_','_' }, { ' ',' ',' ' } }
	};
	char p[9] = { 'n','n', 'n', 'n', 'n', 'n', 'n', 'n', 'n' };

	bool endGame = false;
	bool goodSelectQ = false;
	bool goodSelectM = false;
	bool win_q[10] = { false, false, false, false, false, false, false, false, false, false };
	string player1Name;
	string player2Name;
	char player1;
	char player2;
	char currentPlayer;
	string currentPlayerName;
	int quad = 0;
	int move = 0;

	// start game
	intro();

	setup(player1Name, player2Name, currentPlayerName, player1, player2, currentPlayer);

	while (!(endGame)) {
		//draw game board
		draw(g);

		// ask for and parce player input
		while (!(goodSelectQ)) {
			if (currentPlayer == player1) {
				if (quad == 0) {
					cout << player1Name << " choose a quadrant 1 - 9:";
					cin >> quad;
					cout << endl;
				}
				else if (!(win_q[quad])) {
					goodSelectQ = true;
					cout << player1Name << " choose a move 1 - 9:";
					cin >> move;
					goodSelectM = false;
					while (!(goodSelectM)) {
						if (move == 1 && (g[quad][0][0] != 'X' || g[quad][0][0] != 'O')) {
							g[quad][0][0] = player1;
							goodSelectM = true;
						}
						else if (move == 2 && (g[quad][0][1] != 'X' || g[quad][0][1] != 'O')) {
							g[quad][0][1] = player1;
							goodSelectM = true;
						}
						else if (move == 3 && (g[quad][0][2] != 'X' || g[quad][0][2] != 'O')) {
							g[quad][0][2] = player1;
							goodSelectM = true;
						}
						else if (move == 4 && (g[quad][1][0] != 'X' || g[quad][1][0] != 'O')) {
							g[quad][1][0] = player1;
							goodSelectM = true;
						}
						else if (move == 5 && (g[quad][1][1] != 'X' || g[quad][1][1] != 'O')) {
							g[quad][1][1] = player1;
							goodSelectM = true;
						}
						else if (move == 6 && (g[quad][1][2] != 'X' || g[quad][1][2] != 'O')) {
							g[quad][1][2] = player1;
							goodSelectM = true;
						}
						else if (move == 7 && (g[quad][2][0] != 'X' || g[quad][2][0] != 'O')) {
							g[quad][2][0] = player1;
							goodSelectM = true;
						}
						else if (move == 8 && (g[quad][2][1] != 'X' || g[quad][2][1] != 'O')) {
							g[quad][2][1] = player1;
							goodSelectM = true;
						}
						else if (move == 9 && (g[quad][2][2] != 'X' || g[quad][2][2] != 'O')) {
							g[quad][2][2] = player1;
							goodSelectM = true;
						}
						else {
							cout << "That move is already taken pick another:" << endl;
							cin >> move;
						}
					}
				}
				else {
					cout << "That quadrent is already won pick another:" << endl;
					cin >> quad;
				}
			}
			else if (currentPlayer == player2) {
				if (quad == 0) {
					cout << player2Name << " choose a quadrant 1 - 9:";
					cin >> quad;
					cout << endl;
				}
				else if (!(win_q[quad])) {
					goodSelectQ = true;
					cout << player2Name << " choose a move 1 - 9:";
					cin >> move;
					goodSelectM = false;
					while (!(goodSelectM)) {
						if (move == 1 && (g[quad][0][0] != 'X' && g[quad][0][0] != 'O')) {
							g[quad][0][0] = player2;
							goodSelectM = true;
						}
						else if (move == 2 && (g[quad][0][1] != 'X' && g[quad][0][1] != 'O')) {
							g[quad][0][1] = player2;
							goodSelectM = true;
						}
						else if (move == 3 && (g[quad][0][2] != 'X' && g[quad][0][2] != 'O')) {
							g[quad][0][2] = player2;
							goodSelectM = true;
						}
						else if (move == 4 && (g[quad][1][0] != 'X' && g[quad][1][0] != 'O')) {
							g[quad][1][0] = player2;
							goodSelectM = true;
						}
						else if (move == 5 && (g[quad][1][1] != 'X' && g[quad][1][1] != 'O')) {
							g[quad][1][1] = player2;
							goodSelectM = true;
						}
						else if (move == 6 && (g[quad][1][2] != 'X' && g[quad][1][2] != 'O')) {
							g[quad][1][2] = player2;
							goodSelectM = true;
						}
						else if (move == 7 && (g[quad][2][0] != 'X' && g[quad][2][0] != 'O')) {
							g[quad][2][0] = player2;
							goodSelectM = true;
						}
						else if (move == 8 && (g[quad][2][1] != 'X' && g[quad][2][1] != 'O')) {
							g[quad][2][1] = player2;
							goodSelectM = true;
						}
						else if (move == 9 && (g[quad][2][2] != 'X' && g[quad][2][2] != 'O')) {
							g[quad][2][2] = player2;
							goodSelectM = true;
						}
						else {
							cout << "That move is already taken pick another:" << endl;
							cin >> move;
						}
					}
				}
				else {
					cout << "That quadrent is already won pick another:" << endl;
					cin >> quad;
				}
			}
		}
		goodSelectQ = false;

		//win conditions
		if (g[quad][0][0] == currentPlayer && g[quad][0][1] == currentPlayer && g[quad][0][2] == currentPlayer) {
			win_q[quad] = true;
			quad = 0;
			p[quad - 1] = 'w';
		}
		else if (g[quad][1][0] == currentPlayer && g[quad][1][1] == currentPlayer && g[quad][1][2] == currentPlayer) {
			win_q[quad] = true;
			quad = 0;
			p[quad - 1] = 'w';
		}
		else if (g[quad][2][0] == currentPlayer && g[quad][2][1] == currentPlayer && g[quad][2][2] == currentPlayer) {
			win_q[quad] = true;
			quad = 0;
			p[quad - 1] = 'w';
		}
		else if (g[quad][0][0] == currentPlayer && g[quad][1][0] == currentPlayer && g[quad][2][0] == currentPlayer) {
			win_q[quad] = true;
			quad = 0;
			p[quad - 1] = 'w';
		}
		else if (g[quad][0][1] == currentPlayer && g[quad][1][1] == currentPlayer && g[quad][2][1] == currentPlayer) {
			win_q[quad] = true;
			quad = 0;
			p[quad - 1] = 'w';
		}
		else if (g[quad][0][2] == currentPlayer && g[quad][1][2] == currentPlayer && g[quad][2][2] == currentPlayer) {
			win_q[quad] = true;
			quad = 0;
			p[quad - 1] = 'w';
		}
		else if (g[quad][0][0] == currentPlayer && g[quad][1][1] == currentPlayer && g[quad][2][2] == currentPlayer) {
			win_q[quad] = true;
			quad = 0;
			p[quad - 1] = 'w';
		}
		else if (g[quad][2][0] == currentPlayer && g[quad][1][1] == currentPlayer && g[quad][0][2] == currentPlayer) {
			win_q[quad] = true;
			quad = 0;
			p[quad - 1] = 'w';
		}
		else {
			quad = move;
		}



		if (p[0] == 'w' && p[1] == 'w' && p[2] == 'w') {
			cout << currentPlayerName << " Wins!";
			system("pause");
			endGame = true;
		}
		else if (p[3] == 'w' && p[4] == 'w' && p[5] == 'w') {
			cout << currentPlayerName << " Wins!";
			system("pause");
			endGame = true;
		}
		else if (p[6] == 'w' && p[7] == 'w' && p[8] == 'w') {
			cout << currentPlayerName << " Wins!";
			system("pause");
			endGame = true;
		}
		else if (p[0] == 'w' && p[3] == 'w' && p[6] == 'w') {
			cout << currentPlayerName << " Wins!";
			system("pause");
			endGame = true;
		}
		else if (p[1] == 'w' && p[4] == 'w' && p[7] == 'w') {
			cout << currentPlayerName << " Wins!";
			system("pause");
			endGame = true;
		}
		else if (p[2] == 'w' && p[5] == 'w' && p[8] == 'w') {
			cout << currentPlayerName << " Wins!";
			system("pause");
			endGame = true;
		}
		else if (p[0] == 'w' && p[4] == 'w' && p[8] == 'w') {
			cout << currentPlayerName << " Wins!";
			system("pause");
			endGame = true;
		}
		else if (p[6] == 'w' && p[4] == 'w' && p[2] == 'w') {
			cout << currentPlayerName << " Wins!";
			system("pause");
			endGame = true;
		}


		// swich players
		togglePlayer(player1, player2, currentPlayer, player1Name, player2Name, currentPlayerName);
	}
}
