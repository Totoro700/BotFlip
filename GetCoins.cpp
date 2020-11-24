#include "Command.cpp";
#include "BotFlipConfig.cpp";

using namespace std;

class GetCoinsCommand : public Command
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

	BotFlipConfig *b;


	// Run
	void run() override {
		try
		{
			// Get coins
			cout << "Coins: ";
			cout << b->coins;
			cout << "\n";
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~GetCoinsCommand() {

	};

};