#include <iostream>
#include<time.h>
using namespace std;

// 2 Make values that are not going to change through out the program as constants
const int MAX_CHIPS = 100;
const float MAX_TURNS = .5;
const int MAX_PLAYER_SELECTION = 2;
int main()
{
	//variables
	bool gameOver = false;
	bool playerInTurn = true;
	int chipsInPack = 0;
	int ChipsTaken = 0;
	int maxChipsAllower = 0;
	string playerNames[2]{"Divya","Raghav"};
	bool wantToPlayAgain = false;

	srand(time(0));


	cout << "Enter player1 Name := " << endl;
	cin >> playerNames[0];

	cout << "Enter player2 Name := " << endl;
	cin >> playerNames[1];

	do
	{

	
		chipsInPack = (rand() % MAX_CHIPS) + 1;
		cout << "The number of chips is pack " << chipsInPack << endl << endl;
		maxChipsAllower = (chipsInPack * MAX_TURNS);
		cout << "You can only take these many chips  "<< maxChipsAllower << endl;
		gameOver = false;
	
		playerInTurn = (rand() % MAX_PLAYER_SELECTION);
		while (gameOver == false)
		{
			if (playerInTurn)
				cout << "Hello " << playerNames[0] << " this is your turn to play"<<endl<<endl;
			else
				cout << "Hello " << playerNames[1] << " this is your turn to play"<<endl<<endl;

			/*ChipsTaken = (rand() % maxChipsAllower) + 1;
			cout << "The number of Chips given to player is  " << ChipsTaken <<endl << endl;*/

			do
			{

				cout << "Enter number of chips you want " << endl;
				cin >> ChipsTaken;
				if (ChipsTaken > maxChipsAllower)
				{
					cout << "Re-enter the Chips you want, You are being Greedy !!!!!" << endl << endl;
				}
				else
				{
					chipsInPack = chipsInPack - ChipsTaken;
					cout << "Chips in Pack Remaining " << chipsInPack << endl << endl;
				}
				
			} while (chipsInPack > 1 && ChipsTaken > maxChipsAllower );


			if (chipsInPack == 0)
			{
				gameOver = true;
				if (playerInTurn)
					cout << "Congrats !!!!!!" << playerNames[1] << " You Won" << endl << endl;
				else
					cout << "Congrats !!!!!!" << playerNames[0] << " You Won" << endl << endl;
			}
			else
			{
				//gameOver = false;
				playerInTurn = !playerInTurn;
			}
		}
		cout << "Do you Guys Wanna Play Again!!!! Do Let me know .." << endl;
		cin >> wantToPlayAgain;
	} while (wantToPlayAgain == true);
	return 0;
}