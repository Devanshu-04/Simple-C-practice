/*
Author: Devanshu Kumar
Purpose: Lets user interact and play rock paper scissors
Date: 9/21/2022
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	bool gameRun = true;
	int tie, playerW, computerW;
	tie = 0;
	playerW = 0;
	computerW = 0;


	while (gameRun)
	{
		int playerChoice;
		playerChoice = 0;
		cout << "Please choose a weapon from the menu below:" << endl;
		cout << "1.> Rock" << endl;
		cout << "2.> Paper" << endl;
		cout << "3.> Scissor" << endl;
		cout << "4.> Exit game" << endl;
		cin >> playerChoice;
        cout << endl;
		//srand(time(0));
		unsigned const computerChoice = rand() % 3 + 1;

		if (playerChoice == 1 && computerChoice == 1)
		{
			cout << "Player has chosen Rock" << endl;
			cout << "Computer has chosen Rock" << endl;
			cout << endl;
			cout << "It is a tie!" << endl;
			cout << endl;
			tie += 1;
		}
		else if (playerChoice == 1 && computerChoice == 2)
		{
			cout << "Player has chosen Rock" << endl;
			cout << "Computer has chosen Paper" << endl;
			cout << endl;
			cout << "Computer has won!" << endl;
			cout << endl;
			computerW += 1;
		}
		else if (playerChoice == 1 && computerChoice == 3)
		{
			cout << "Player has chosen Rock" << endl;
			cout << "Computer has chosen Scissors" << endl;
			cout << endl;
			cout << "Player has won!" << endl;
			cout << endl;
			playerW += 1;
		}
		else if (playerChoice == 4)
		{
			gameRun = false;
		}
		else if (playerChoice != 1 && playerChoice != 2 && playerChoice != 3 && playerChoice != 4)
		{
			cout << "[Please enter a valid choice]" << endl;
			cout << endl;

		}
		cout << endl;

//***************************************************************************************************************
        if (playerChoice == 2 && computerChoice == 1)
        {
            cout << "Player has chosen Paper" << endl;
            cout << "Computer has chosen Rock" << endl;
            cout << endl;
            cout << "Player has won!" << endl;
            cout << endl;
            playerW += 1;
        }
        else if (playerChoice == 2 && computerChoice == 2)
        {
            cout << "Player has chosen Paper" << endl;
            cout << "Computer has chosen Paper" << endl;
            cout << endl;
            cout << "It is a tie!" << endl;
            cout << endl;
            tie += 1;
        }
        else if (playerChoice == 2 && computerChoice == 3)
        {
            cout << "Player has chosen Paper" << endl;
            cout << "Computer has chosen Scissors" << endl;
            cout << endl;
            cout << "Computer has won!" << endl;
            cout << endl;
            computerW += 1;
        }
        else if (playerChoice == 4)
        {
            gameRun = false;
        }

        cout << endl;
//***********************************************************************************************

        if (playerChoice == 3 && computerChoice == 1)
        {
            cout << "Player has chosen Scissors" << endl;
            cout << "Computer has chosen Rock" << endl;
            cout << endl;
            cout << "Computer has won!" << endl;
            cout << endl;
            computerW += 1;
        }
        else if (playerChoice == 3 && computerChoice == 2)
        {
            cout << "Player has chosen Scissors" << endl;
            cout << "Computer has chosen Paper" << endl;
            cout << endl;
            cout << "Player has won!" << endl;
            cout << endl;
            playerW += 1;
        }
        else if (playerChoice == 3 && computerChoice == 3)
        {
            cout << "Player has chosen Scissors" << endl;
            cout << "Computer has chosen Scissors" << endl;
            cout << endl;
            cout << "It is a tie!" << endl;
            cout << endl;
            tie += 1;
        }
        else if (playerChoice == 4)
        {
            gameRun = false;
        }

        cout << setw(5) << "Scoreboard:" << setw(5) << endl;
        cout << left << "Ties         " << right << ": " << tie << endl;
        cout << left << "Player wins  " << right << ": " << playerW << endl;
        cout << left << "Computer Wins" << right << ": " << computerW << endl;
        cout << endl;
	}

cout << "Press the enter key once or twice to exit"; cin.ignore(); cin.get();
}
