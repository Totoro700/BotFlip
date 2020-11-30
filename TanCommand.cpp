#include "BotFlipConfig.cpp";
#include "Command.cpp";

class TanCommand : public Command
{
	// Public
public:
	// Functions
	// Description
	string description() override {
		return "Calculates the tangent of a number";
	};

	// Name
	string name() override {
		return "tangent";
	};

	BotFlipConfig* c;

	// Run
	void run() override {
		try
		{
			// Cosine
			cout << "Number?\n";
			cin >> this->getConfig()->numOne;
			cout << tan(this->getConfig()->numOne);
			cout << "\n";
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~TanCommand() {

	};

};