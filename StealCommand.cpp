#include "BotFlipConfig.cpp";
#include "Command.cpp";

class StealCommand : public Command
{
	// Public
public:
	// Functions
	// Description
	string description() override {
		return "N/A";
	};

	// Name
	string name() override {
		return "stealr";
	};

	// Run
	void run() override {
		try
		{
			// Steal
			cout << "No.\n";
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~StealCommand() {

	};

};