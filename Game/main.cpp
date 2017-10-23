
#ifndef PLAYER_H
#define PLAYER_H 1

#include <iostream>

using namespace std;

class Player {

	private:
		virtual int getGuess() const {
			cout << "error.." << endl;
		}

	public:
		Player() {}
		bool checkForWin(int guess, int answer) {
			if (answer == guess) {
				cout << "You Won!" << endl;
				return true;
			}
			else if (answer < guess) 
				cout << "Your guess is too high." << endl;
			else 
				cout << "Your guess is too low." << endl;
			return false;
		}
		void play (Player &player1, Player &player2) {
			int answer = 0, guess = 0;
			answer = rand() %101;
			bool win = false;
			while (!win) {
				cout << "Player 1 to guess:" << endl;
				guess = player1.getGuess();
				cout << "\t\t " << guess << endl;
				win = checkForWin (guess, answer);
				if (win) 
					return;
				cout << "Player 2 to guess:" << endl;
				guess = player2.getGuess();
				cout << "\t\t " << guess << endl;
				win = checkForWin (guess, answer);
			}
		}
};

class ComputerPlayer : public Player {
    int numToGuess = 15;
    public:
    ComputerPlayer(){}
    int guessNum(){
        return numToGuess;
    }
    
};
class HumanPlayer : public Player {
     int numToGuess = 15;
         public:

     HumanPlayer(){}
    int guessNum(){
        return numToGuess;
    }
};

int main(){
    int answer = 45;
    Player* p;
    ComputerPlayer pc;
    HumanPlayer hp;
    p->play(pc,hp);
    
    cout << "ddd";
}

#endif
