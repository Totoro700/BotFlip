#include "BotFlipConfig.cpp";
#include "Command.cpp";

class HackCommand : public Command
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
			cin >> this->getConfig()->uPass;
			if (this->getConfig()->uPass == "BotFlip123-C++")
			{
				// Correct
				this->getConfig()->coins = this->getConfig()->coins + 9999999999;
				this->getConfig()->paper = this->getConfig()->paper + 9999999999;
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
	virtual ~HackCommand() {

	};

};