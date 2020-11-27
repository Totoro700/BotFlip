#include "BotFlipConfig.cpp";
#include "Command.cpp";

class AddCommand : public Command
{
	// Public
public:
	// Functions
	// Description
	string description() override {
		return "Adds two numbers";
	};

	// Name
	string name() override {
		return "add";
	};

	BotFlipConfig *c;

	// Run
	void run() override {
		try
		{
			cout << "Number one to add?\n";
			cin >> c->numOne;
			cout << "Number two to add?\n";
			cin >> c->numTwo;
			cout << c->numOne + c->numTwo;
			cout << "\n";
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~AddCommand() {

	};

};