#include "BotFlipConfig.cpp";
#include "Command.cpp";

class SellCommand : public Command
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
			// Sell paper
			if (this->getConfig()->paper == 0)
			{
				// No paper to sell
				cout << "You don't even have paper to sell!\n";
			}
			else
			{
				cout << "For every paper you sell, you get 10 coins\n";
				cout << "How many papers do you want to sell?\n";

				// Get num to sell
				cin >> this->getConfig()->numToSell;

				// Check
				if (this->getConfig()->numToSell > this->getConfig()->paper)
				{
					// Not enough paper
					cout << "You don't have enough paper!\n";
				}
				else
				{
					// Sell
					this->getConfig()->paper = this->getConfig()->paper - this->getConfig()->numToSell;
					this->getConfig()->coins = this->getConfig()->coins + (this->getConfig()->numToSell * 10);
				}
			}
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~SellCommand() {

	};

};