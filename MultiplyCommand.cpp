#include "BotFlipConfig.cpp";
#include "Command.cpp";

class MultiplyCommand : public Command
{
	// Public
public:
	// Functions
	// Description
	string description() override {
		return "Multiplies two numbers";
	};

	// Name
	string name() override {
		return "steal";
	};

	// Run
	void run() override {
		try
		{
			cout << "Number one to multiply?\n";
			cin >> this->getConfig()->numOne;
			cout << "Number two to multiply?\n";
			cin >> this->getConfig()->numTwo;
			cout << this->getConfig()->numOne * this->getConfig()->numTwo;
			cout << "\n";
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~MultiplyCommand() {

	};

};