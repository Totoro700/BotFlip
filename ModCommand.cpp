#include "BotFlipConfig.cpp";
#include "Command.cpp";

class ModCommand : public Command
{
	// Public
public:
	// Functions
	// Description
	string description() override {
		return "Calculates the mod of two numbers";
	};

	// Name
	string name() override {
		return "modulus";
	};

	// Run
	void run() override {
		try
		{
			cout << "Number one to calculate modulus?\n";
			cin >> this->getConfig()->modNumOne;
			cout << "Number two to calculate modulus\n";
			cin >> this->getConfig()->modNumTwo;
			cout << this->getConfig()->modNumOne % this->getConfig()->modNumTwo;
			cout << "\n";
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~ModCommand() {

	};

};