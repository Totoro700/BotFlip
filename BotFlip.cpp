// Include
#include <iostream>


#include <Windows.h>


#include <cmath>;


#include <math.h>;


#include <stdio.h>


using namespace std;

// Class
class BotFlip {
public:
	// Create variables

	// Int
	int coins = 0;
	int paper = 1;
	int num = 0;
	int toCalcu = 0;
	int rNum = 0;
	int uNum = 0;
	int a = 0;
	int b = 0;
	int numToSell = 0;
	int modNumOne = 0;
	int modNumTwo = 0;

	// Char
	char letter = NULL;
	char chars = NULL;

	// Float
	float numOne = 0;
	float numTwo = 0;

	// String
	string uPass;
	string data[10] = {};
	string toStore;
	string ver = "1.3.4o";
	string tP;


	//                     Functions


	// Clear screen
	void clear()
	{
		system("CLS");
	}

	void e()
	{
		cout << "Something went wrong! Please try again\n";
	}

	// Help
	void help()
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
			cout << "sine - Calculates sine of on a number - sin\n";
			cout << "cosine - Calculates cosine on a number - cos\n";
			cout << "tangent - Calculates tangent on a number - tan\n";
			cout << "arcsin - Calculates arcsin on a number - asin\n";
			cout << "arccos - Calculates arccos on a number - acos\n";
			cout << "arctan - Calculates arctan on a number - atan\n";
			cout << "ver - Displays the version - ver\n";
			cout << "spcfcVer - Displays the specific version - sVer\n";
		}
		catch (...)
		{
			e();
		}
	}

	// Play coins
	void playCoins()
	{
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

	// Play Paper
	void playPaper()
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

	// Coins
	void getCoins()
	{
		// Get coins
		cout << "Coins: ";
		cout << coins;
		cout << "\n";
	}

	// Paper
	void getPaper()
	{
		// Get paper
		cout << "Paper: ";
		cout << paper;
		cout << "\n";
	}

	// Sell
	void sell()
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

	// Empty
	void empty()
	{
		cout << "";
	}

	// hack
	void hack()
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

	// Steal
	void steal()
	{
		// Steal
		cout << "No.\n";
	}

	// Spam
	void spam()
	{
		// Reset
		a = 0;
		b = 0;

		// Spam
		cout << "Spamming 100000 charecters\n";

		// Wait 1 second
		Sleep(1000);
		try
		{
			// Set charecters to spam
			char chars[115] = {

			'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
			'`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', '[', ']', ';', ',', '.', '/', '~', '!', '@', '#', '$', '%', '^',
			'&', '*', '(', ')', '_', '+', '{', '}', '|', ':', '<', '>', '?', 'Q', 'W', 'E', 'R', 'T', 'Y,', 'U', 'I', 'O', 'P', 'A', 'S', 'D',
			'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M', '§', '\u0201', '\u00a1', '\u00a2', '\u00a3', '\u00a4', '\u00a5',
			'\u00a6', '\u00a7', '', 'é', 'Ó', 'Ñ', '¼', 'Ì', 'ó', 'ÿ', 'ÿ', 'ƒ', 'Ä', 'Ê', 'ô', 'å', 'ÿ', 

			};

			// Start spamming
			while (a == 0)
			{

				// Check if spammed 100000 charecters already
				if (b < 100001)
				{
					// Spam

					//Get char
					char letter = chars[rand() % 117 + 1];

					// Print char
					cout << letter;

					// Add one to var b
					b++;
				}
				else
				{
					// Break
					cout << "\n";
					a = 1;
					break;
				}
			}
		}
		catch (...)
		{
			e();
		}
	}

	void coffee()
	{
		// Coffee
		cout << "No.\n";
	}

	// Add
	void add()
	{
		cout << "Number one to add?\n";
		cin >> numOne;
		cout << "Number two to add?\n";
		cin >> numTwo;
		cout << numOne + numTwo;
		cout << "\n";
	}

	// Subtract
	void subtract()
	{
		cout << "Number one to subtract?\n";
		cin >> numOne;
		cout << "Number two to subtract?\n";
		cin >> numTwo;
		cout << numOne - numTwo;
		cout << "\n";
	}

	// Multiply
	void multiply()
	{
		cout << "Number one to multiply?\n";
		cin >> numOne;
		cout << "Number two to multiply?\n";
		cin >> numTwo;
		cout << numOne * numTwo;
		cout << "\n";
	}

	// Divide
	void divide()
	{
		cout << "Number one to divide?\n";
		cin >> numOne;
		cout << "Number two to divide?\n";
		cin >> numTwo;
		cout << numOne / numTwo;
		cout << "\n";
	}

	// Modulus
	void mod()
	{
		cout << "Number one to calculate modulus?\n";
		cin >> modNumOne;
		cout << "Number two to calculate modulus\n";
		cin >> modNumTwo;
		cout << modNumOne % modNumTwo;
		cout << "\n";
	}

	// Version
	void version()
	{
		// Version
		cout << "C++ Bot. Version 1.3\n";
	}

	// Specific version
	void spcfcVer()
	{
		// Specific version
		cout << "C++ Bot. Version ";
		cout << ver;
		cout << "\n";
	}

	//                              Trigonometric functions
	// Sine
	void sine()
	{
		// Sine
		cout << "Number?\n";
		cin >> numOne;
		cout << sin(numOne);
		cout << "\n";
	}

	// Cosine
	void cosine()
	{
		// Cosine
		cout << "Number?\n";
		cin >> numOne;
		cout << cos(numOne);
		cout << "\n";
	}

	// Tangent
	void tangent()
	{
		// Tangent
		cout << "Number?\n";
		cin >> numOne;
		cout << tan(numOne);
		cout << "\n";
	}
	
	// Load
	void load()
	{
		for (int i = 0; i < 4; i++)
		{
			Sleep(250);
			clear();
			cout << "Loading \n";
			Sleep(250);
			clear();
			cout << "Loading .\n";
			Sleep(250);
			clear();
			cout << "Loading . .\n";
			Sleep(250);
			clear();
			cout << "Loading . . .\n";
		}
		clear();
	}
	// Text
	void print(string msg)
	{
		int j = 1;
		while (msg[j] != NULL)
		{
			cout << msg[j];
			Sleep(50);
			j++;
		};
	}

	// Check text
	void checkText()
	{
		cout << "To print?\n";
		cin >> tP;
		print(tP);
	}
	
	// Echo
	void echo()
	{
		cout << "To echo?\n";
		cin >> tP;
		cout << tP;
	}

	// Arcsine
	void asin()
	{
		cout << "Number?\n";
		cin >> num;
		cout << std::asin(num);
		cout << "\n";
	}
	
	// Arccosine
	void acos()
	{
		cout << "Number?\n";
		cin >> num;
		cout << std::acos(num);
		cout << "\n";
	}


	// Arctangent
	void atan()
	{
		cout << "Number?\n";
		cin >> num;
		cout << std::atan(num);
		cout << "\n";
	}
};

// Str to int
constexpr unsigned int str2int(const char* str, int h = 0)
{
	return !str[h] ? 5381 : (str2int(str, h + 1) * 33) ^ str[h];
}

// Main
int main()
{
	// Include class as b
	BotFlip b;

	// Create variable to store for commands
	char* cmd = new char[CMSG_MAX_LENGTH_FLAG];

	// Clear
	b.clear();

	// Begining title
	cout << "BotFlip\n";
	cout << b.ver;
	cout << "\n";
	cout << "----------------------------------------------------------------------------------\n";

	Sleep(1000);

	// Clear
	b.clear();

	// Load
	b.load();

	// Main loop
	while (0 == 0)
	{

		// Get input
		cin >> cmd;

		// Check for commands
		switch (str2int(cmd))
		{
			case str2int("help"):
			case str2int("hlp"):
				b.help();
				break;
			case str2int("Hi"):
			case str2int("hi"):
			case str2int("Hi!"):
			case str2int("hi!"):
			case str2int("Hello"):
			case str2int("hello"):
			case str2int("Hello!"):
			case str2int("hello!"):
				cout << "Hi! Type help for a list of commands you can use\n";
				break;
			case str2int("playCoins"):
			case str2int("plyCns"):
			case str2int("play_coins"):
			case str2int("ply_cns"):
				b.playCoins();
				break;
			case str2int("playPaper"):
			case str2int("plyPpr"):
			case str2int("play_paper"):
			case str2int("ply_ppr"):
				b.playPaper();
				break;
			case str2int("coins"):
			case str2int("cns"):
				b.getCoins();
				break;
			case str2int("paper"):
			case str2int("ppr"):
				b.getPaper();
				break;
			case str2int("steal"):
				b.steal();
				break;
			case str2int("sell"):
			case str2int("sll"):
				b.sell();
				break;
			case str2int("givemecoffee"):
			case str2int("gvmcff"):
				b.coffee();
				break;
			case str2int("hack"):
				b.hack();
			case str2int("cls"):
			case str2int("CLS"):
			case str2int("Cls"):
				b.clear();
				break;
			case str2int("spam"):
				b.spam();
				break;
			case str2int("add"):
				b.add();
				break;
			case str2int("subtract"):
			case str2int("sub"):
				b.subtract();
				break;
			case str2int("multiply"):
			case str2int("mul"):
				b.multiply();
				break;
			case str2int("divide"):
			case str2int("div"):
				b.divide();
				break;
			case str2int("modulus"):
			case str2int("mod"):
				b.mod();
				break;
			case str2int("ver"):
				b.version();
			case str2int("spcfcVer"):
			case str2int("sVer"):
				b.spcfcVer();
				break;
			case str2int("sine"):
			case str2int("sin"):
				b.sine();
				break;
			case str2int("cosine"):
			case str2int("cos"):
				b.cosine();
				break;
			case str2int("tangent"):
			case str2int("tan"):
				b.tangent();
				break;
			case str2int("text"):
				b.checkText();
				break;
			case str2int("echo"):
				b.echo();
				break;
			case str2int("arcsin"):
			case str2int("asin"):
				b.asin();
				break;
			case str2int("arccos"):
			case str2int("acos"):
				b.acos();
				break;
			case str2int("arctan"):
			case str2int("atan"):
				b.atan();
				break;
			default:
				b.empty();
				break;
		}
	}
}

