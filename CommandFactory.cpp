#include <iostream>;
#include "HelpCommand.cpp";
#include "PlayCoinsCommand.cpp";
#include "PlayPaperCommand.cpp";
#include "GetCoinsCommand.cpp";
#include "GetPaperCommand.cpp";
#include "SellCommand.cpp";
#include "StealCommand.cpp";
#include "CoffeeCommand.cpp";
#include "HackCommand.cpp";
#include "SpamCommand.cpp";
#include "AddCommand.cpp";
#include "SubtractCommand.cpp";

// Std
using namespace std;

class CommandFactory
{
public:
	enum CommandType {
		Help,
		PlayCoins,
		PlayPaper,
		GetCoins,
		GetPaper,
		Sell,
		Steal,
		Coffee,
		Hack,
		Spam,
		Add,
		Subtract
	};

	static unique_ptr<Command> createCommand(CommandType commandType) {
		switch (commandType) {
			case Help:
				return make_unique<HelpCommand>();
			case PlayCoins:
				return make_unique<PlayCoinsCommand>();
			case PlayPaper:
				return make_unique<PlayPaperCommand>();
			case GetCoins:
				return make_unique<GetCoinsCommand>();
			case GetPaper:
				return make_unique<GetPaperCommand>();
			case Sell:
				return make_unique<SellCommand>();
			case Steal:
				return make_unique<StealCommand>();
			case Coffee:
				return make_unique<CoffeeCommand>();
			case Hack:
				return make_unique<HackCommand>();
			case Spam:
				return make_unique<SpamCommand>();
			case Add:
				return make_unique<AddCommand>();
			case Subtract:
				return make_unique<SubtractCommand>();
			case Multiply:
				return make_unique<MultiplyCommand>();
		}
	};
};