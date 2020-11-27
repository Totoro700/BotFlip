#include <iostream>;
#include "HelpCommand.cpp";
#include "PlayCoinsCommand.cpp";
#include "PlayPaperCommand.cpp";
#include "GetCoinsCommand.cpp";
#include "GetPaperCommand.cpp";
#include "SellCommand.cpp";

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
		Sell
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

		}
	};
};