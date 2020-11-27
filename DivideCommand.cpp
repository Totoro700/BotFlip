#include "BotFlipConfig.cpp";
#include "Command.cpp";

class DivideCommand : public Command
{
	// Public
public:
	// Functions
	// Description
	string description() override {
		return "Divides two numbers";
	};

	// Name
	string name() override {
		return "divide";
	};

	// Run
	void run() override {
		try
		{
			cout << "Number one to divide?\n";
			cin >> this->getConfig()->numOne;
			cout << "Number two to divide?\n";
			cin >> this->getConfig()->numTwo;
			cout << this->getConfig()->numOne / this->getConfig()->numTwo;
			cout << "\n";
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~DivideCommand() {

	};

};