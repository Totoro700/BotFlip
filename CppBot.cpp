// C++ Bot
// 
// How to use
//  1. Run the script
//	2. type help for a list of commands
// 
//  
// 
// 
// 
// 
// 
// 
// 
// 

#include <iostream>;
#include <Windows.h>;

// Std
using namespace std;



// Main
int main() 
{

	// Create variables
	string cmd;
	int coins = 0;
	int paper = 1;
	int rNum = 0;
	int uNum = 0;
	int a = 0;
	int b = 0;
	char letter = NULL;
	char chars = NULL;
	int numToSell = 0;
	int numOne = 0;
	int numTwo = 0;
	string uPass;

	// Clear
	system("CLS");

	// Main loop
	while (0 == 0) 
	{

		// Get input
		cin >> cmd;

		// Start checking for commands 
		if (cmd == "help" || cmd == "hlp") 
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
			cout << "ver - Displays the version - ver\n";
			cout << "spcfcVer - Displays the specific version -sVer\n";
		}else if (cmd == "playCoins" || cmd == "plyCns") 
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
		else if (cmd == "playPaper" || cmd == "plyPpr") 
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
			system("CLS");
		}
		else if (cmd == "spam") 
		{
			// Spam
			cout << "Spamming 100000 charecters\n";

			// Wait 1 second
			Sleep(1000);

			// Set charecters to spam
			char chars[92] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', '[', ']', ';', ',', '.', '/', '~', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '_', '+', '{', '}', '|', ':', '<', '>', '?', 'Q', 'W', 'E', 'R', 'T', 'Y,', 'U', 'I', 'O', 'P', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M', ' ' };

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
					break;
				}
			}

			// End spam
			cout << "\nSpam ended\n";
		}
		else if (cmd == "exit" || cmd == "ext") 
		{
		// Exit
			break;
		}
		else if (cmd == "add")
		{
		cout << "Number one to add?\n";
		cin >> numOne;
		cout << "Number two to add?\n";
		cin >> numTwo;
		cout << numOne+numTwo;
		}
		else if (cmd == "subtract" || cmd=="sub")
		{
		cout << "Number one to subtract?\n";
		cin >> numOne; 
		cout << "Number two to subtract?\n";
		cin >> numTwo;
		cout << numOne - numTwo;
		}
		else if (cmd == "multiply" || cmd == "mul")
		{
		cout << "Number one to multiply?\n";
		cin >> numOne;
		cout << "Number two to multiply?\n";
		cin >> numTwo;
		cout << numOne * numTwo;
		}
		else if (cmd == "divide" || cmd == "div")
		{
		cout << "Number one to divide?\n";
		cin >> numOne;
		cout << "Number two to divide?\n";
		cin >> numTwo;
		cout << numOne / numTwo;
		}
		else if (cmd == "ver") 
		{
		cout << "C++ Bot. Version 1.2\n";
		}
		else if (cmd == "spcfcVer" || cmd == "sVer") 
		{
		cout << "C++ Bot. Version 1.2.1o\n";
		}
		else 
		{
			// Not a listed command
			continue;
		}
	}
}



