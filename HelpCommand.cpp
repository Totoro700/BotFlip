#include "Command.cpp";

using namespace std;

class HelpCommand : public Command
{
	// Public
public:

	// Functions
	// Description
	string description() override {
		return "Displays this help message!";
	};

	// Name
	string name() override {
		return "help";
	};

	int helpCommandWidth = 15;
	int helpDescriptionWidth = 70;
	int helpIdWidth = 10;

	// Run
	void run() override {
		try
		{
			// Help
			cout << "--------------------HELP--------------------" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "[command name]" << std::setw(helpDescriptionWidth) << "[description]" << std::setw(helpIdWidth) << "[id]" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "help" << std::setw(helpDescriptionWidth) << "Displays this help message" << std::setw(helpIdWidth) << "hlp" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "playCoins" << std::setw(helpDescriptionWidth) << "Play for a chance to get coins!" << std::setw(helpIdWidth) << "plyCns" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "playPaper" << std::setw(helpDescriptionWidth) << "Play for a chance to get paper!" << std::setw(helpIdWidth) << "plyPpr" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "coins" << std::setw(helpDescriptionWidth) << "See all the coins you have" << std::setw(helpIdWidth) << "cns" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "paper" << std::setw(helpDescriptionWidth) << "See all the paper you have" << std::setw(helpIdWidth) << "ppr" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "sell" << std::setw(helpDescriptionWidth) << "Sell the paper you have" << std::setw(helpIdWidth) << "sll" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "steal" << std::setw(helpDescriptionWidth) << "Steal" << std::setw(helpIdWidth) << "stl" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "givemecoffee" << std::setw(helpDescriptionWidth) << "Gives you coffee" << std::setw(helpIdWidth) << "gvmcff" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "cls" << std::setw(helpDescriptionWidth) << "Clears all the text on the screen" << std::setw(helpIdWidth) << "clear" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "spam" << std::setw(helpDescriptionWidth) << "Program spams" << std::setw(helpIdWidth) << "spm" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "exit" << std::setw(helpDescriptionWidth) << "Exits this program" << std::setw(helpIdWidth) << "ext" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "add" << std::setw(helpDescriptionWidth) << "Adds two numbers" << std::setw(helpIdWidth) << "add" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "subtract" << std::setw(helpDescriptionWidth) << "Sutracts two numbers" << std::setw(helpIdWidth) << "sbtrct" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "multiply" << std::setw(helpDescriptionWidth) << "Multiplies two numbers" << std::setw(helpIdWidth) << "mul" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "divide" << std::setw(helpDescriptionWidth) << "Divides two numbers" << std::setw(helpIdWidth) << "div" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "modulus" << std::setw(helpDescriptionWidth) << "Calculates the modules (mod) of two numbers" << std::setw(helpIdWidth) << "mod" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "sine" << std::setw(helpDescriptionWidth) << "Calculates sine of on a number" << std::setw(helpIdWidth) << "sin" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "cosine" << std::setw(helpDescriptionWidth) << "Calculates cosine on a number" << std::setw(helpIdWidth) << "cos" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "tangent" << std::setw(helpDescriptionWidth) << "Calculates tangent on a number" << std::setw(helpIdWidth) << "tan" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "arcsin" << std::setw(helpDescriptionWidth) << "Calculates arcsin on a number" << std::setw(helpIdWidth) << "asin" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "arccos" << std::setw(helpDescriptionWidth) << "Calculates arccos on a number" << std::setw(helpIdWidth) << "acos" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "arctan" << std::setw(helpDescriptionWidth) << "Calculates arctan on a number" << std::setw(helpIdWidth) << "atan" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "ver" << std::setw(helpDescriptionWidth) << "Displays the version" << std::setw(helpIdWidth) << "ver" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "spcfcVer" << std::setw(helpDescriptionWidth) << "Displays the specific version" << std::setw(helpIdWidth) << "sVer" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "repository" << std::setw(helpDescriptionWidth) << "Opens BotFlip's repository" << std::setw(helpIdWidth) << "repo" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "report" << std::setw(helpDescriptionWidth) << "Opens issue panel where you can report an issue" << std::setw(helpIdWidth) << "bug" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "releases" << std::setw(helpDescriptionWidth) << "Opens all the releases" << std::setw(helpIdWidth) << "release" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "debug" << std::setw(helpDescriptionWidth) << "Basic debug" << std::setw(helpIdWidth) << "debug" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "fwrite" << std::setw(helpDescriptionWidth) << "File write, opens a file a writes some text into it" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "fowrite" << std::setw(helpDescriptionWidth) << "File overwrite, opens a file and overwrites some text into it" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "fclear" << std::setw(helpDescriptionWidth) << "File clear, opens a file and clears all the contents in the file" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "color-green" << std::setw(helpDescriptionWidth) << "Sets the text color to green (default)" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "color-red" << std::setw(helpDescriptionWidth) << "Sets the text color to red" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "color-white" << std::setw(helpDescriptionWidth) << "Sets the text color to white" << std::endl;
			cout << std::left << std::setw(helpCommandWidth) << "color-blue" << std::setw(helpDescriptionWidth) << "Sets the text color to blue (not recommended)" << std::endl;
			cout << std::endl;
			cout << "-------------------------------------------------" << std::endl;
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~HelpCommand() {

	};

};