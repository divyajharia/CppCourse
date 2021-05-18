//#include <iostream>
//#include<time.h>
//using namespace std;
//
//// 2 Make values that are not going to change through out the program as constants
//const int MAX_CHIPS = 100;
//const float MAX_TURNS = .5;
//const int MAX_PLAYER_SELECTION = 2;
//int main()
//{
//	//variables
//	bool gameOver = false;
//	bool playerInTurn = true;
//	int chipsInPack = 0;
//	int ChipsTaken = 0;
//	int maxChipsAllower = 0;
//	string playerNames[2]{"Divya","Raghav"};
//	bool wantToPlayAgain = false;
//
//	srand(time(0));
//
//
//	cout << "Enter player1 Name := " << endl << endl;
//	cin >> playerNames[0];
//	cout << endl << endl;
//	cout << "Enter player2 Name := " << endl << endl;
//	cin >> playerNames[1];
//	cout << endl << endl;
//	do
//	{
//
//	
//		chipsInPack = (rand() % MAX_CHIPS) + 1;
//		cout << "The number of chips is pack " << chipsInPack << endl << endl;
//		
//		gameOver = false;
//	
//		while (gameOver == false)
//		{
//			do
//			{
//				maxChipsAllower = (chipsInPack * MAX_TURNS);
//				
//				if (playerInTurn)
//					cout << "Hello " << playerNames[0] << " this is your turn to play"<<endl<<endl;
//				else
//					cout << "Hello " << playerNames[1] << " this is your turn to play"<<endl<<endl;
//
//				cout << "You can only take these many chips" << endl << endl;
//				if (maxChipsAllower == 0)
//				{
//					cout << " 1";
//					cout << endl << endl;
//				}
//				else
//				{
//					cout << maxChipsAllower << endl<<endl;
//				}
//				  
//			/*ChipsTaken = (rand() % maxChipsAllower) + 1;
//			cout << "The number of Chips given to player is  " << ChipsTaken <<endl << endl;*/
//
//			
//
//				cout << "Enter number of chips you want " << endl <<endl;
//				cin >> ChipsTaken;
//				cout << endl << endl;
//			} while (chipsInPack > 1 && ChipsTaken > maxChipsAllower );
//
//				chipsInPack = chipsInPack - ChipsTaken;
//				cout << "Chips in Pack Remaining " << chipsInPack << endl << endl;
//			
//			if (chipsInPack == 0)
//			{
//				gameOver = true;
//				if (playerInTurn)
//					cout << "Congrats !!!!!!" << playerNames[1] << " You Won" << endl << endl;
//				else
//					cout << "Congrats !!!!!!" << playerNames[0] << " You Won" << endl << endl;
//			}
//			else
//			{
//				//gameOver = false;
//				playerInTurn = !playerInTurn;
//			}
//		}
//		cout << "Do you Guys Wanna Play Again!!!! Do Let me know 0  or 1.." << endl<<endl;
//		cin >> wantToPlayAgain;
//	} while (wantToPlayAgain == true);
//	return 0;
//}