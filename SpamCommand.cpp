#include "BotFlipConfig.cpp";
#include "Command.cpp";
#include "Windows.h";

class SpamCommand : public Command
{
	// Public
public:
	// Functions
	// Description
	string description() override {
		return "Program spams";
	};

	// Name
	string name() override {
		return "spam";
	};

	// Run
	void run() override {
		try
		{
			// Reset
			this->getConfig()->a = 0;
			this->getConfig()->b = 0;

			// Spam
			cout << "Spamming 100000 charecters\n";

			// Wait 1 second
			Sleep(1000);
			try
			{
				// Set charecters to spam
				char chars[115] = {

				'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
				'`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', '[', ']', ';', ',', '.', '/', '~', '!', '@', '#', '$', '%', '^',
				'&', '*', '(', ')', '_', '+', '{', '}', '|', ':', '<', '>', '?', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', 'A', 'S', 'D',
				'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M', '§', '\u0201', '\u00a1', '\u00a2', '\u00a3', '\u00a4', '\u00a5',
				'\u00a6', '\u00a7', '', 'é', 'Ó', 'Ñ', '¼', 'Ì', 'ó', 'ÿ', 'ÿ', 'ƒ', 'Ä', 'Ê', 'ô', 'å', 'ÿ',

				};

				// Start spamming
				while (this->getConfig()->a == 0)
				{

					// Check if spammed 100000 charecters already
					if (this->getConfig()->b < 100001)
					{
						// Spam

						//Get char
						char letter = chars[rand() % 116 + 1];

						// Print char
						cout << letter;

						// Add one to var b
						this->getConfig()->b++;
					}
					else
					{
						// Break
						cout << "\n";
						this->getConfig()->a = 1;
						break;
					}
				}
			}
			catch(...)
			{
				e();
			}
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~SpamCommand() {

	};

};