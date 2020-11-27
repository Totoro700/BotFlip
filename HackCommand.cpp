#include "BotFlipConfig.cpp";
#include "Command.cpp";

class SellCommand : public Command
{
	// Public
public:
	// Functions
	// Description
	string description() override {
		return "Play for a chance to get paper!";
	};

	// Name
	string name() override {
		return "playPaper";
	};

	// Run
	void run() override {
		try
		{
			// Hack			
			cout << "Password: ";

			// Include class
			BotFlipConfig *c;

			// Get input
			cin >> c->uPass;
			if (c->uPass == "BotFlip123-C++")
			{
				// Correct
				c->coins = c->coins + 9999999999;
				c->paper = c->paper + 9999999999;
			}
			else
			{
				// Incorrect
				cout << "Incorrect!";
			}
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~SellCommand() {

	};

};