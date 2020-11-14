#include <iostream>


#include <Windows.h>


#include <cmath>;

using namespace std;

// Clear screen
void clear()
{
	system("CLS");
}

void e()
{
	cout << "Something went wrong! Please try again\n";
}


// Main
int main()
{

	// Create variables

	// Int
	int coins = 0;
	int paper = 1;
	int rNum = 0;
	int uNum = 0;
	int a = 0;
	int b = 0;
	int numToSell = 0;
	int modNumOne;
	int modNumTwo;

	// Char
	char letter = NULL;
	char chars = NULL;

	// Float
	float numOne = 0;
	float numTwo = 0;

	// String
	string cmd;
	string uPass;
	string data[10] = {};
	string toStore;
	string ver = "1.3.1o";


	Sleep(1000);
	// Clear
	clear();

	cout << "C++_Bot.cpp\n";
	cout << ver;
	cout << "\n";
	cout << "-----------------------------------------------------------------\n";



	// Main loop
	while (0 == 0)
	{

		// Get input
		cin >> cmd;

		// Start checking for commands 
		if (cmd == "help" || cmd == "hlp")
		{
			try
			{

				// Help
				cout << "Format: [command name] - [description] - [id]\n";
				cout << "help - Displays this help message - hlp\n";
				cout << "playCoins - Play for a chance to get coins! - plyCns\n";
				cout << "playPaper - Play for a chance to get paper! - plyPpr\n";
				cout << "coins - See all the coins you have - cns\n";
				cout << "paper - See all the paper you have - ppr\n";
				cout << "sell - Sell the paper you have - sll\n";
				cout << "steal - Steal - stl\n";
				cout << "givemecoffee - Gives you coffee - gvmcff\n";
				cout << "cls - Clears all the text on the screen - cls\n";
				cout << "spam - Program spams - spm\n";
				cout << "exit - Exits this program - ext\n";
				cout << "add - Adds two numbers - add\n";
				cout << "subtract - Sutracts two numbers - sbtrct\n";
				cout << "multiply - Multiplies two numbers - mul\n";
				cout << "divide - Divides two numbers - div\n";
				cout << "modulus - Calculates the modules (mod) of two numbers - mod\n";
				cout << "sine - Calculates sine of one number - sin\n";
				cout << "cosine - Calculates cosine one number - cos\n";
				cout << "tangent - Calculates tangent on number - tan\n";
				cout << "";
				cout << "ver - Displays the version - ver\n";
				cout << "spcfcVer - Displays the specific version - sVer\n";
				cout << "changeLog - Displays the change log for the current version - sysCL\n";
			}
			catch(...)
			{
				e();
			}
		}
		else if (cmd=="Hi" || cmd == "hi" || cmd=="Hi!" || cmd=="hi!" || cmd=="Hello" || cmd=="hello" || cmd=="Hello!" || cmd=="hello!")
		{
			cout << "Hi! Type help for a list of commands you can use\n";
		}
		else if (cmd == "playCoins" || cmd == "plyCns" || cmd == "play_coins" || cmd == "plyCns")
		{
			// Coins
			// Generate random number
			int rNum = rand() % 9 + 1;

			// Get user's random number
			cout << "Guess the random number (1 to 10)\n";
			cin >> uNum;

			// Check if correct
			if (uNum == rNum)
			{
				// Correct
				cout << "Correct!\n";
				coins++;
			}
			else
			{
				// Incorrect
				cout << "Incorrect!\n";
			}
		}
		else if (cmd == "playPaper" || cmd == "plyPpr" || cmd=="play_paper" || cmd=="ply_ppr")
		{
			// Generate random number from 1 to 100
			int rNum = rand() % 100 + 1;

			// Get user's random number
			cout << "Guess the random number (1 to 100)\n";
			cin >> uNum;

			// Check if correct
			if (uNum == rNum)
			{
				// Correct
				cout << "Correct!\n";
				paper++;
			}
			else
			{
				// Incorrect
				cout << "Incorrect!\n";
			}
		}
		else if (cmd == "coins" || cmd == "cns")
		{
			// Get coins
			cout << "Coins: ";
			cout << coins;
			cout << "\n";
		}
		else if (cmd == "paper")
		{
			// Get paper
			cout << "Paper: ";
			cout << paper;
			cout << "\n";
		}
		else if (cmd == "steal")
		{
			// Steal
			cout << "No.\n";
		}
		else if (cmd == "sell" || cmd == "sll")
		{
			// Sell paper
			if (paper == 0)
			{
				// No paper to sell
				cout << "You don't even have paper to sell!\n";
			}
			else
			{
				cout << "For every paper you sell, you get 10 coins\n";
				cout << "How many papers do you want to sell?\n";

				// Get num to sell
				cin >> numToSell;

				// Check
				if (numToSell > paper)
				{
					// Not enough paper
					cout << "You don't have enough paper!\n";
				}
				else
				{
					// Sell
					paper = paper - numToSell;
					coins = coins + (numToSell * 10);
				}
			}
		}
		else if (cmd.empty())
		{
			throw "Command is empty";
			// Blank
			cout << "";
			continue;
		}
		else if (cmd == "givemecoffee" || cmd == "gvmcff")
		{
			// Coffee
			cout << "No.\n";
		}
		else if (cmd == "hack")
		{
			// Hack			
			cout << "Password: ";

			// Get input
			cin >> uPass;
			if (uPass == "C++")
			{
				// Correct
				coins = coins + 9999999999;
				paper = paper + 9999999999;
			}
			else
			{
				// Incorrect
				cout << "Incorrect!";
			}
		}
		else if (cmd == "cls" || cmd == "CLS" || cmd == "Cls")
		{
			// Clear (cls)
			clear();
		}

		else if (cmd == "spam")
		{
			// Spam
			cout << "Spamming 100000 charecters\n";

			// Wait 1 second
			Sleep(1000);
			try
			{
				// Set charecters to spam
				char chars[100] = {

				'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
				'`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', '[', ']', ';', ',', '.', '/', '~', '!', '@', '#', '$', '%', '^',
				'&', '*', '(', ')', '_', '+', '{', '}', '|', ':', '<', '>', '?', 'Q', 'W', 'E', 'R', 'T', 'Y,', 'U', 'I', 'O', 'P', 'A', 'S', 'D',
				'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M', ' ', '\u0201', '\u00a1', '\u00a2', '\u00a3', '\u00a4', '\u00a5',
				'\u00a6', '\u00a7'
				
				};

				// Start spamming
				while (a == 0)
				{

					// Check if spammed 100000 charecters already
					if (b < 100000)
					{
						// Spam

						//Get char
						char letter = chars[rand() % 91 + 1];

						// Print char
						cout << letter;

						// Add one to var b
						b++;
					}
					else
					{
						// Break
						a = 1;
					}
				}
			}
			catch (...)
			{
				e();
			}
		}
		else if (cmd == "exit" || cmd == "ext")
		{
			// Exit
			break;
		}
		else if (cmd == "add")
		{
			// Add
			cout << "Number one to add?\n";
			cin >> numOne;
			cout << "Number two to add?\n";
			cin >> numTwo;
			cout << numOne + numTwo;
			cout << "\n";
		}
		else if (cmd == "subtract" || cmd == "sub")
		{
			// Subtract
			cout << "Number one to subtract?\n";
			cin >> numOne;
			cout << "Number two to subtract?\n";
			cin >> numTwo;
			cout << numOne - numTwo;
			cout << "\n";
		}
		else if (cmd == "multiply" || cmd == "mul")
		{
			// Multiply
			cout << "Number one to multiply?\n";
			cin >> numOne;
			cout << "Number two to multiply?\n";
			cin >> numTwo;
			cout << numOne * numTwo;
			cout << "\n";
		}
		else if (cmd == "divide" || cmd == "div")
		{
			// Divide
			cout << "Number one to divide?\n";
			cin >> numOne;
			cout << "Number two to divide?\n";
			cin >> numTwo;
			cout << numOne / numTwo;
			cout << "\n";
		}
		else if (cmd == "modulus" || cmd == "mod")
		{
			// Modules
			cout << "Number one to calculate modulus?\n";
			cin >> modNumOne;
			cout << "Number two to calculate modulus\n";
			cin >> modNumTwo;
			cout << modNumOne % modNumTwo;
			cout << "\n";
		}
		else if (cmd == "ver")
		{
			// Version
			cout << "C++ Bot. Version 1.3\n";
		}
		else if (cmd == "spcfcVer" || cmd == "sVer")
		{
			// Specific version
			cout << "C++ Bot. Version ";
			cout << ver;
			cout << "\n";
		}
		else if (cmd == "changeLog" || cmd=="sysCL")
		{
			// Change log
			cout << "Change log for ";
			cout << ver;
			cout << "\n";
			cout << "New fixes:\n";
			cout << "Hello command\n";
		}
		else if (cmd == "sin" || cmd == "sine")
		{
			// Sine
			cout << "Number?\n";
			cin >> numOne;
			cout << sin(numOne);
			cout << "\n";
		}
		else if (cmd == "cos" || cmd == "cosine")
		{
			// Cosine
			cout << "Number?\n";
			cin >> numOne;
			cout << cos(numOne);
			cout << "\n";
		}
		else if (cmd == "tan" || cmd == "tangent")
		{
			// Tangent
			cout << "Number?\n";
			cin >> numOne;
			cout << tan(numOne);
			cout << "\n";
		}
		else
		{
			// Not a listed command
			continue;
		}
	}
}



