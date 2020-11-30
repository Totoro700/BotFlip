#include "BotFlipConfig.cpp";
#include "Command.cpp";

class CosCommand : public Command
{
	// Public
public:
	// Functions
	// Description
	string description() override {
		return "Calculates the coisne of a number";
	};

	// Name
	string name() override {
		return "cosine";
	};

	BotFlipConfig* c;

	// Run
	void run() override {
		try
		{
			// Cosine
			cout << "Number?\n";
			cin >> this->getConfig()->numOne;
			cout << cos(this->getConfig()->numOne);
			cout << "\n";
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~CosCommand() {

	};

};