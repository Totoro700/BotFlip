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
		return "Displays how many coins you have!";
	};

	// Name
	string name() override {
		return "coins";
	};

	BotFlipConfig* b;


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