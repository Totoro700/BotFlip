#include <iostream>;
#include <iomanip>;
#include "BotFlipConfig.cpp";

using namespace std;

// Create class called Command
class Command
{
public:

	// Error
	void e()
	{
		cout << "Something went wrong! Please try again\n";
	}

	// Pointer for the class BotFlipConfig
	BotFlipConfig* config = new BotFlipConfig();

	virtual string description() = 0;

	virtual string name() = 0;
	virtual void run() = 0;
	
	BotFlipConfig* getConfig() {
		return this->config;
	}

	void setConfig(BotFlipConfig *config)
	{
		this->config = config;
	}

	virtual ~Command() {};
};

