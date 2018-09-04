// Example program

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;



int main() {
	// define variables
	string willPlay = "nothing";
	string Amove;
	int oneOne = 0;
	int oneTwo = 0;
	int oneThree = 0;
	int twoOne = 0;
	int twoTwo = 0;
	int twoThree = 0;
	int threeOne = 0;
	int threeTwo = 0;
	int threeThree = 0;
	bool isAWinner = true;
	bool turnTaken = true;
	int winOne = 0;
	int winTwo = 0;
	int winThree = 0;
	int winFour = 0;
	int winFive = 0;
	int winSix = 0;
	int winSeven = 0;
	int winEight = 0;

	// Ask if player wants to play
	while (willPlay != "Y") {
		cout << "So, do you want to play tictactoe? Y or N" << endl;

		cin >> willPlay;

		if (willPlay == "Y") {

			cout << "cool lets play" << endl;

		}
		else {

			cout << " are you sure?" << endl;

			cin >> willPlay;

			if (willPlay == "Y") {

				cout << "bye" << endl;

				return 0;
			}
		}
	}
	// start game
	do {

		cout << " It's player 1's turn" << endl;

		while (turnTaken) {
			cout << "input a combonation of A,B,C and 1,2,3 to specify your move" << endl;
			cin >> Amove;
			if (Amove == "A1") {
				if (oneOne > 0) {
					cout << "move taken here already try again" << endl;
				}
				else {
					oneOne++;
					turnTaken = false;
				}
			}
			else if (Amove == "A2") {
				if (oneTwo > 0) {
					cout << "move taken here already try again" << endl;
				}
				else {
					oneTwo++;
					turnTaken = false;
				}
			}
			else if (Amove == "A3") {
				if (oneThree > 0) {
					cout << "move taken here already try again" << endl;
				}
				else {
					oneThree++;
					turnTaken = false;
				}
			}
			else if (Amove == "B1") {
				if (twoOne > 0) {
					cout << "move taken here already try again" << endl;
				}
				else {
					twoOne++;
					turnTaken = false;
				}
			}
			else if (Amove == "B2") {
				if (twoTwo > 0) {
					cout << "move taken here already try again" << endl;
				}
				else {
					twoTwo++;
					turnTaken = false;
				}
			}
			else if (Amove == "B3") {
				if (twoThree > 0) {
					cout << "move taken here already try again" << endl;
				}
				else {
					twoThree++;
					turnTaken = false;
				}
			}
			else if (Amove == "C1") {
				if (threeOne > 0) {
					cout << "move taken here already try again" << endl;
				}
				else {
					threeOne++;
					turnTaken = false;
				}
			}
			else if (Amove == "C2") {
				if (threeTwo > 0) {
					cout << "move taken here already try again" << endl;
				}
				else {
					threeTwo++;
					turnTaken = false;
				}
			}
			else if (Amove == "C3") {
				if (threeThree > 0) {
					cout << "move taken here already try again" << endl;
				}
				else {
					threeThree++;
					turnTaken = false;
				}
			}
			else if (Amove == "C4") {
				cout << "\n BOOM \n";
			}
		}
		turnTaken = true;

		// calculate win conditions
		winOne = oneOne + oneTwo + oneThree;
		winTwo = oneOne + twoTwo + threeThree;
		winThree = oneThree + twoTwo + threeOne;
		winFour = twoOne + twoTwo + twoThree;
		winFive = threeThree + threeTwo + threeOne;
		winSix = oneOne + twoOne + threeOne;
		winSeven = oneTwo + twoTwo + threeTwo;
		winEight = oneThree + twoThree + threeThree;

		// check for win
		if (winOne == 3) {

			cout << "Player 1 wins" << endl;

			return 0;

		}
		else if (winTwo == 3) {

			cout << "Player 1 wins" << endl;

			return 0;

		}
		else if (winThree == 3) {

			cout << "Player 1 wins" << endl;

			return 0;

		}
		else if (winFour == 3) {

			cout << "Player 1 wins" << endl;

			return 0;

		}
		else if (winFive == 3) {

			cout << "Player 1 wins" << endl;

			return 0;

		}
		else if (winSix == 3) {

			cout << "Player 1 wins" << endl;

			return 0;

		}
		else if (winSeven == 3) {

			cout << "Player 1 wins" << endl;

			return 0;

		}
		else if (winEight == 3) {

			cout << "Player 1 wins" << endl;

			return 0;

		}
		else {


			// second players turn starts
			cout << "Player 2's turn " << endl;

			while (turnTaken) {
				cout << "input a combonation of A,B,C and 1,2,3 to specify your move" << endl;
				cin >> Amove;
				if (Amove == "A1") {
					if (oneOne > 0) {
						cout << "move taken here already try again" << endl;
					}
					else {
						oneOne += 10;
						turnTaken = false;
					}
				}
				else if (Amove == "A2") {
					if (oneTwo > 0) {
						cout << "move taken here already try again" << endl;
					}
					else {
						oneTwo += 10;
						turnTaken = false;
					}
				}
				else if (Amove == "A3") {
					if (oneThree > 0) {
						cout << "move taken here already try again" << endl;
					}
					else {
						oneThree += 10;
						turnTaken = false;
					}
				}
				else if (Amove == "B1") {
					if (twoOne > 0) {
						cout << "move taken here already try again" << endl;
					}
					else {
						twoOne += 10;
						turnTaken = false;
					}
				}
				else if (Amove == "B2") {
					if (twoTwo > 0) {
						cout << "move taken here already try again" << endl;
					}
					else {
						twoTwo += 10;
						turnTaken = false;
					}
				}
				else if (Amove == "B3") {
					if (twoThree > 0) {
						cout << "move taken here already try again" << endl;
					}
					else {
						twoThree += 10;
						turnTaken = false;
					}
				}
				else if (Amove == "C1") {
					if (threeOne > 0) {
						cout << "move taken here already try again" << endl;
					}
					else {
						threeOne += 10;
						turnTaken = false;
					}
				}
				else if (Amove == "C2") {
					if (threeTwo > 0) {
						cout << "move taken here already try again" << endl;
					}
					else {
						threeTwo += 10;
						turnTaken = false;
					}
				}
				else if (Amove == "C3") {
					if (threeThree > 0) {
						cout << "move taken here already try again" << endl;
					}
					else {
						threeThree += 10;
						turnTaken = false;
					}
				}
				else if (Amove == "C4") {
					cout << "\n BOOM \n";
				}
			}
			turnTaken = true;

			// calculate win conditions
			winOne = oneOne + oneTwo + oneThree;
			winTwo = oneOne + twoTwo + threeThree;
			winThree = oneThree + twoTwo + threeOne;
			winFour = twoOne + twoTwo + twoThree;
			winFive = threeThree + threeTwo + threeOne;
			winSix = oneOne + twoOne + threeOne;
			winSeven = oneTwo + twoTwo + threeTwo;
			winEight = oneThree + twoThree + threeThree;

			// check for player 2 win conditions
			if (winOne == 30) {

				cout << "Player 2 wins" << endl;

				return 0;

			}
			else if (winTwo == 30) {

				cout << "Player 2 wins" << endl;

				return 0;

			}
			else if (winThree == 30) {

				cout << "Player 2 wins" << endl;

				return 0;

			}
			else if (winFour == 30) {

				cout << "Player 2 wins" << endl;

				return 0;

			}
			else if (winFive == 30) {

				cout << "Player 2 wins" << endl;

				return 0;

			}
			else if (winSix == 30) {

				cout << "Player 2 wins" << endl;

				return 0;

			}
			else if (winSeven == 30) {

				cout << "Player 2 wins" << endl;

				return 0;

			}
			else if (winEight == 30) {

				cout << "Player 2 wins" << endl;

				return 0;

			}
		}




	} while (isAWinner);
}