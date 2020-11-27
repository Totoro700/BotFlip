#include <iostream>;
#include <Windows.h>;

using namespace std;

class BotFlipConfig
{
public:
	// Int
	int coins = 0;
	int paper = 1;
	int rNum = 0;
	int uNum = 0;
	int numToSell = 0;
	int num = 0;
	int toCalcu = 0;
	int a = 0;
	int b = 0;
	int modNumOne = 0;
	int modNumTwo = 0;
	int helpCommandWidth = 15;
	int helpDescriptionWidth = 70;
	int helpIdWidth = 10;

	// Char
	char letter = NULL;
	char chars = NULL;

	// Float
	double numOne = 0;
	double numTwo = 0;

	// String
	string uPass;
	string toStore;
	string tP;
	string toWrite;

	// Version
	string ver = "1.4.0b";
};