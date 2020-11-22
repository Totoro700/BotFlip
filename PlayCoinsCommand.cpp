#include "Command.cpp";'
#include "BotFlipConfig.cpp";
 
using namespace std;

class PlayCoinsCommand : public Command
{
	// Public
public:
	// Functions
	// Description
	string description() override {
		return "Play for a chance to get coins!";
	};

	// Name
	string name() override {
		return "playCoins";
	};

	// Run
	void run() override {
		try
		{
			// Generate random number
			int rNum = rand() % 9 + 1;

			// Get user's random number
			cout << "Guess the random number (1 to 10)\n";
			cin >> this->getConfig()->uNum;

			// Check if correct
			if (this->getConfig()->uNum == rNum)
			{
				// Correct
				cout << "Correct!\n";
				this->getConfig()->coins++;
			}
			else
			{
				// Incorrect
				cout << "Incorrect!\n";
			}
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~PlayCoinsCommand() {

	};

};