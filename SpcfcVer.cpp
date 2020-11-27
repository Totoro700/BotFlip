#include "BotFlipConfig.cpp";
#include "Command.cpp";

class SpcfcverCommand : public Command
{
	// Public
public:
	// Functions
	// Description
	string description() override {
		return "Displays the specific current version";
	};

	// Name
	string name() override {
		return "spcfcver";
	};

	// Run
	void run() override {
		try
		{
			cout << "C++ Bot. Version ";
			cout << this->getConfig()->ver;
			cout << "\n";
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~SpcfcverCommand() {

	};

};