﻿/*

--------LICENSE--------

MIT License
Copyright (c) 2020 Totoro700

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


-----------------------


*/


// Include
#include <string>;
#include <cmath>;
#include <iomanip>;
#include <iostream>;
#include <fstream>;
#include <math.h>;
#include <Windows.h>;
#include <shellapi.h>;
#include "Command.cpp";
#include "CommandFactory.cpp";

// Std
using namespace std;


// Str to int
constexpr unsigned int str2int(const char* str, int h = 0)
{
	return !str[h] ? 5381 : (str2int(str, h + 1) * 33) ^ str[h];
}


// Class BotFlip
class BotFlip
{
public:
	// Create variables

	// Int
	int num = 0;
	int toCalcu = 0;
	int a = 0;
	int b = 0;
	int numToSell = 0;
	int modNumOne = 0;
	int modNumTwo = 0;
	int helpCommandWidth = 15;
	int helpDescriptionWidth = 70;
	int helpIdWidth = 10;

	// Char
	char letter = NULL;
	char chars = NULL;

	// Float
	double numOne = 0;
	double numTwo = 0;

	// String
	string uPass;
	string toStore;
	string tP;
	string toWrite;

	BotFlipConfig* c = new BotFlipConfig();

	// Clear screen
	void clear()
	{
		system("CLS");
	}

	// Error
	void e()
	{
		cout << "Something went wrong! Please try again\n";
	}

	// Empty
	void empty()
	{
		cout << "";
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
		cout << "C++ Bot. Version 1.4\n";
	}

	// Specific version
	void spcfcVer()
	{
		// Specific version
		cout << "C++ Bot. Version ";
		cout << c->ver;
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

	// Open repository
	void repo()
	{
		ShellExecute(0, 0, L"https://github.com/Totoro700/BotFlip", 0, 0, SW_SHOW);
	}

	// Report an issue
	void bug()
	{
		ShellExecute(0, 0, L"https://github.com/Totoro700/BotFlip/issues/new", 0, 0, SW_SHOW);
	}

	// Releases
	void releases()
	{
		ShellExecute(0, 0, L"https://github.com/Totoro700/BotFlip/releases", 0, 0, SW_SHOW);
	}

	// Secant
	void sec()
	{
		cout << "Number?\n";
		cin >> num;
		cout << 1 / cos(num);
		cout << "\n";
	}

	// Cosecant
	void csc()
	{
		cout << "Number?\n";
		cin >> num;
		cout << 1 / sin(num);
		cout << "\n";
	}

	// Cotangent
	void cot()
	{
		cout << "Number?\n";
		cin >> num;
		cout << 1 / tan(num);
		cout << "\n";
	}

	// Title
	void getTitle()
	{
		cout << "BotFlip\n";
		cout << c->ver;
		cout << "\n";
		cout << "----------------------------------------------------------------------------------\n";
	}

	// Debug
	void debug()
	{
		cout << "Debug started . . .\n";
		Sleep(100);
		cout << "Checking for problems . . .\n";
		Sleep(2000);

		// Check if it is a beta version
		if (c->ver.find("b"))
		{
			// May have an issue
			cout << "This program may have an issue, do you want to report it?\nY = Yes | N = No\n";

			// Create variable
			string report;

			// Get input
			cin >> report;

			// Check
			if (isYes(report))
			{
				// Report bug
				bug();
			}
			else if (isNo(report))
			{
				// Check for updates
				cout << "Do you want to check for updates?\nY = yes | N = No\n";

				// Create variable
				string update;

				// Get input
				cin >> update;

				// Check
				if (isYes(report))
				{
					// Open releases page on Github
					releases();
				}
				else if (isNo(report))
				{
					// Do nothing
				}
				else
				{
					// Not valid answer
					cout << "That\'s is not a valid answer!\n";
				}
			}
			else
			{
				// Not valid answer
				cout << "That\'s is not a valid answer!\n";
			}
		}
	}

	bool isYes(string character)
	{
		return ("Y" == character || "y" == character);
	}

	bool isNo(string character)
	{
		return ("N" == character || "n" == character);
	}

	// File write (fwrite)
	void fwrite()
	{
		ofstream text;

		// Ask
		cout << "When finished writing type CLOSE on a new line. What do you want to write?\n";

		// Get input
		cin >> toWrite;

		// Open file and append new content
		text.open("text.txt", ios_base::app);

		while (getline(cin, toWrite)) {
			if (toWrite == "CLOSE") {
				break;
			}
			// Update file
			text << toWrite << std::endl;
		}

		// Close file
		text.close();
		cout << "Updated file!\n";
	}

	// File overwrite (fowrite)
	void fowrite()
	{
		ofstream text;

		// Ask
		cout << "To over write?\n";

		// Input
		getline(cin, toWrite);

		// Open file and truncate content
		text.open("text.txt", ios::trunc);

		while (getline(cin, toWrite)) {
			if (toWrite == "CLOSE") {
				break;
			}
			// Update file
			text << toWrite << std::endl;
		}

		// Close
		text.close();
		cout << "Updated file!\n";
	}

	// Clear file (fclear)
	void fclear()
	{
		ofstream text;

		// Open file and truncate previous content
		text.open("text.txt", ios::trunc);

		// Clear
		text << " ";

		// Close text.txt
		text.close();
	}

	// Log command
	void log(string cmd)
	{
		ofstream cmd_log;

		// Open log and append new content
		cmd_log.open("cmd_log.txt", ios_base::app);

		// Update log
		cmd_log << cmd + "\n";

		// Close log
		cmd_log.close();
	}

	// Int to str
	string int2str(int toStr)
	{
		return to_string(toStr);
	}

	// Green
	void green()
	{
		system("Color 0A");
		cout << "Successfully changed the text color to green!\n";
	}

	// Red
	void red()
	{
		system("Color 0C");
		cout << "Successfully changed the text color to red!\n";
	}

	// White
	void white()
	{
		system("Color 0F");
		cout << "Successfully changed the text color to white!\n";
	}

	// Blue
	void blue()
	{
		system("Color 01");
		cout << "Successfully changed the text color to blue!\n";
	}


};


void runCommand(CommandFactory::CommandType commandType)
{
	unique_ptr<Command> command = CommandFactory::createCommand(commandType);
	command->run();
}


// Main
int main()
{

	system("Color 0A");

	// Include class as b
	BotFlip b;

	// Create variable to store for commands
	char* cmd = new char[CMSG_MAX_LENGTH_FLAG];

	// Clear
	b.clear();

	b.getTitle();

	// Wait 1 second
	Sleep(1000);

	// Load
	b.load();

	// Main loop
	while (0 == 0)
	{
		// Get input
		cin >> cmd;

		// Log
		b.log(cmd);

		// Check for commands
		switch (str2int(cmd))
		{
		case str2int("help"):
		case str2int("hlp"):
			runCommand(CommandFactory::Help);
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
			runCommand(CommandFactory::PlayCoins);
			break;
		case str2int("playPaper"):
		case str2int("plyPpr"):
		case str2int("play_paper"):
		case str2int("ply_ppr"):
			runCommand(CommandFactory::PlayPaper);
			break;
		case str2int("coins"):
		case str2int("cns"):
			runCommand(CommandFactory::GetCoins);
			break;
		case str2int("paper"):
		case str2int("ppr"):
			runCommand(CommandFactory::GetPaper);
			break;
		case str2int("steal"):
			runCommand(CommandFactory::Steal);
			break;
		case str2int("sell"):
		case str2int("sll"):
			runCommand(CommandFactory::Sell);
			break;
		case str2int("givemecoffee"):
		case str2int("gvmcff"):
			runCommand(CommandFactory::Coffee);
			break;
		case str2int("hack"):
			runCommand(CommandFactory::Hack);
		case str2int("cls"):
		case str2int("CLS"):
		case str2int("Cls"):
		case str2int("clear"):
			b.clear();
			break;
		case str2int("spam"):
			runCommand(CommandFactory::Spam);
			break;
		case str2int("add"):
			runCommand(CommandFactory::Add);
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
		case str2int("repo"):
		case str2int("repository"):
			b.repo();
			break;
		case str2int("bug"):
		case str2int("report"):
		case str2int("issue"):
		case str2int("issues"):
			b.bug();
			break;
		case str2int("releases"):
		case str2int("release"):
			b.releases();
			break;
		case str2int("secant"):
			b.sec();
			break;
		case str2int("cosecant"):
			b.csc();
			break;
		case str2int("cotangent"):
			b.cot();
			break;
		case str2int("debug"):
			b.debug();
			break;
		case str2int("fwrite"):
			b.fwrite();
			break;
		case str2int("fowrite"):
		case str2int("fclear"):
			b.fclear();
		case str2int("color-green"):
			b.green();
			break;
		case str2int("color-red"):
			b.red();
			break;
		case str2int("color-white"):
			b.white();
			break;
		case str2int("color-blue"):
			b.blue();
			break;
		default:
			b.empty();
			break;
		}
	}
}

