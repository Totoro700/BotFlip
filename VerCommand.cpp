#include "BotFlipConfig.cpp";
#include "Command.cpp";

class VersionCommand : public Command
{
	// Public
public:
	// Functions
	// Description
	string description() override {
		return "Displays the current version";
	};

	// Name
	string name() override {
		return "ver";
	};

	// Run
	void run() override {
		try
		{
			cout << "C++ Bot. Version 1.4\n";
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~VersionCommand() {

	};

};