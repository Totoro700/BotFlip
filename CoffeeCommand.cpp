#include "BotFlipConfig.cpp";
#include "Command.cpp";

class CoffeeCommand : public Command
{
	// Public
public:
	// Functions
	// Description
	string description() override {
		return "Gives you coffee";
	};

	// Name
	string name() override {
		return "coffee";
	};

	// Run
	void run() override {
		try
		{
			// Coffee
			cout << "Coffee out of order, check back later.\n";
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~CoffeeCommand() {

	};

};