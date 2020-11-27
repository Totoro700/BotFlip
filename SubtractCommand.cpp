#include "BotFlipConfig.cpp";
#include "Command.cpp";

class SubtractCommand : public Command
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
		return "steal";
	};

	BotFlipConfig *c;

	// Run
	void run() override {
		try
		{
			cout << "Number one to subtract?\n";
			cin >> c->numOne;
			cout << "Number two to subtract?\n";
			cin >> c->numTwo;
			cout << c->numOne - c->numTwo;
			cout << "\n";
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~SubtractCommand() {

	};

};