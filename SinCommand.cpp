#include "BotFlipConfig.cpp";
#include "Command.cpp";

class SinCommand : public Command
{
	// Public
public:
	// Functions
	// Description
	string description() override {
		return "Calculates the sine of a number";
	};

	// Name
	string name() override {
		return "sine";
	};

	BotFlipConfig* c;

	// Run
	void run() override {
		try
		{
			// Sine
			cout << "Number?\n";
			cin >> this->getConfig()->numOne;
			cout << sin(this->getConfig()->numOne);
			cout << "\n";
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~SinCommand() {

	};

};