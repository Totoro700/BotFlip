#include <iostream>;
#include "HelpCommand.cpp";
#include "PlayCoinsCommand.cpp";
#include "PlayPaperCommand.cpp";

using namespace std;

class CommandFactory
{
public:
	enum CommandType {
		Help,
		PlayCoins,
		PlayPaper
	};

	static unique_ptr<Command> createCommand(CommandType commandType) {
		switch (commandType) {
			case Help:
				return make_unique<HelpCommand>();
			case PlayCoins:
				return make_unique<PlayCoinsCommand>();
			case PlayPaper:
				return make_unique<PlayPaperCommand>();
		}
	};
};