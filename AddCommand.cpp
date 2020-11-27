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
			cin >> this->getConfig()->numOne;
			cout << "Number two to add?\n";
			cin >> this->getConfig()->numTwo;
			cout << this->getConfig()->numOne + this->getConfig()->numTwo;
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