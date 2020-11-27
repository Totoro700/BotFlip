#include "Command.cpp";
#include "BotFlipConfig.cpp";

using namespace std;

class GetPaperCommand : public Command
{
	// Public
public:

	// Functions
	// Description
	string description() override {
		return "Displays how much paper you have";
	};

	// Name
	string name() override {
		return "paper";
	};

	BotFlipConfig* b;


	// Run
	void run() override {
		try
		{
			// Get coins
			cout << "Coins: ";
			cout << b->paper;
			cout << "\n";
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~GetPaperCommand() {

	};

};