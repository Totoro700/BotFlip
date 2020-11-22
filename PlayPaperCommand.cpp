#include "Command.cpp";

using namespace std;

class PlayPaperCommand : public Command
{
	// Public
public:
	// Functions
	// Description
	string description() override {
		return "Play for a chance to get paper!";
	};

	// Name
	string name() override {
		return "playPaper";
	};

	// Run
	void run() override {
		try
		{
			// Generate random number from 1 to 100
			int rNum = rand() % 100 + 1;

			// Get user's random number
			cout << "Guess the random number (1 to 100)\n";
			cin >> this->getConfig()->uNum;

			// Check if correct
			if (this->getConfig()->uNum == rNum)
			{
				// Correct
				cout << "Correct!\n";
				this->getConfig()->paper++;
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
	virtual ~PlayPaperCommand() {

	};

};