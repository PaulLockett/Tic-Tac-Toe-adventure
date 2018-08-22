// Example program

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;



int main(){

bool isAPlayer;
int oneOne;
int oneTwo;
int oneThree;
int twoOne;
int twoTwo;
int twoThree;
int threeOne;
int threeTwo;
int threeThree;
bool isLeaving;
bool isAWinner;
int winOne;
int winTwo;
int winThree;
int winFour;
int winFive;
int winSix;
int winSeven;
int winEight;
// game start
    do{    
        cout << "So, do you want to play tictactoe?"<< endl;
    
        cin >> isAPlayer;

        if(isAPlayer){
            
            cout << "cool lets play" << endl;
            
        } else {
         
            cout << " are you sure?" << endl;
            
            cin >> isLeaving;
            
            if(isLeaving){
                
                cout << "bye" << endl;
                
                return 0;
            }
        }
    } while(! isAPlayer);

    do{
        
        cout << " It's player 1's turn" << endl;
        
        cin >> oneOne;
        cin >> oneTwo;
        cin >> oneThree;
        cin >> twoOne;
        cin >> twoTwo;
        cin >> twoThree;
        cin >> threeOne;
        cin >> threeTwo;
        cin >> threeThree;
        
        winOne = oneOne+oneTwo+oneThree;
        winTwo = oneOne+twoTwo+threeThree;
        winThree = oneThree+twoTwo+threeOne;
        winFour = twoOne+twoTwo+twoThree;
        winFive = threeThree+threeTwo+threeOne;
        winSix = oneOne+twoOne+threeOne;
        winSeven = oneTwo+twoTwo+threeTwo;
        winEight = oneThree+twoThree+threeThree;
        
        if (winOne >= 3){
            
            cout << "Player 1 wins" << endl;
            
            return 0;
            
        } else if (winTwo >= 3){
             
            cout << "Player 1 wins" << endl;
            
            return 0;
            
        }else if (winThree >= 3){
             
            cout << "Player 1 wins" << endl;
            
            return 0;
            
        }else if (winFour >= 3){
             
            cout << "Player 1 wins" << endl;
            
            return 0;
            
        }else if (winFive >= 3){
             
            cout << "Player 1 wins" << endl;
            
            return 0;
            
        }else if (winSix >= 3){
             
            cout << "Player 1 wins" << endl;
            
            return 0;
            
        }else if (winSeven >= 3){
             
            cout << "Player 1 wins" << endl;
            
            return 0;
            
        }else if (winEight >= 3){
             
            cout << "Player 1 wins" << endl;
            
            return 0;
            
        }else{
        
            cout << "Player 2's turn "<<endl;
            
            cin >> oneOne;
            cin >> oneTwo;
            cin >> oneThree;
            cin >> twoOne;
            cin >> twoTwo;
            cin >> twoThree;
            cin >> threeOne;
            cin >> threeTwo;
            cin >> threeThree;
                
            if (winOne >= 3){
            
            cout << "Player 2 wins" << endl;
            
            return 0;
            
            } else if (winTwo >= 3){
             
                cout << "Player 2 wins" << endl;
            
                return 0;
            
            }else if (winThree >= 3){
             
                cout << "Player 2 wins" << endl;
            
                return 0;
            
            }else if (winFour >= 3){
             
                cout << "Player 2 wins" << endl;
            
                return 0;
            
            }else if (winFive >= 3){
             
                cout << "Player 2 wins" << endl;
            
                return 0;
            
            }else if (winSix >= 3){
             
                cout << "Player 2 wins" << endl;
            
                return 0;
            
            }else if (winSeven >= 3){
             
                cout << "Player 2 wins" << endl;
            
                return 0;
            
            }else if (winEight >= 3){
             
                cout << "Player 2 wins" << endl;
            
                return 0;
            
            }
        }
        
        
        
        
    } while (! isAWinner);
}