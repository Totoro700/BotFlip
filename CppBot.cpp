#include <iostream>;
#include <Windows.h>;
#include <stdlib.h>;
#include <time.h>
using namespace std;
int main(){
	cout << "Creating variables";
	string acx;
	int coins = 0;
	int paper = 1;
	int rNum = 0;
	int uNum = 0;
	int a = NULL;
	int b = NULL;
	char letter = NULL;
	char chars = NULL;
	int numToSell = 0;
	system("CLS");
	while (0 == 0) {
		cin >> acx;
		if (acx == "help") {
			cout << "help - Displays this help message\n";
			cout << "playCoins - Play for a chance to get coins!\n";
			cout << "playPaper - Play for a chance to get paper!\n";
			cout << "coins - See all the coins you have\n";
			cout << "paper - See all the paper you have\n";
			cout << "sell - Sell the paper you have\n";
			cout << "steal - [None] \n";
			cout << "givemecoffee - Gives you coffee\n";
			cout << "cls - Clears all the text on the screen\n";
			cout << "spam - Program spams\n";
			cout << "exit - Exits this program\n";
		}
		else if (acx == "playCoins") {
			int rNum = rand() % 9 + 1;
			int uNum;
			cout << "Guess the random number (1 to 10)\n";
			cin >> uNum;
			if (uNum == rNum) {
				cout << "Correct!\n";
				coins++;
			}
			else {
				cout << "Incorrect!\n";
			}
		}
		else if (acx == "playPaper") {
			int rNum = rand() % 100 + 1;
			int wNum;
			cout << "Guess the random number (1 to 100)\n";
			cin >> wNum;
			if (wNum == rNum) {
				cout << "Correct!\n";
				paper++;
			}
			else {
				cout << "Incorrect!\n";
			}
		}
		else if (acx == "coins") {
			cout << "Coins: ";
			cout << coins;
			cout << "\n";
		}
		else if (acx == "paper") {
			cout << "Paper: ";
			cout << paper;
			cout << "\n";
		}
		else if (acx == "steal") {
			cout << "No.\n";
		}
		else if (acx == "sell") {
			if (paper == 0) {
				cout << "You don't even have paper to sell!\n";
			}
			else {
				cout << "No.\n";
				int numToSell;
				cout << "For every paper you sell, you get 10 coins\n";
				cout << "How many papers do you want to sell?\n";
				cin >> numToSell;
				if (numToSell > paper) {
					cout << "You don't have enough paper!\n";
				}
				else {
					paper = paper - numToSell;
					coins = coins + (numToSell * 10);
				}
			}
		}
		else if (acx == "NULL") {
			cout << "No.\n";
		}
		else if (acx == "") {
			cout << "";
			continue;
		}
		else if (acx == "givemecoffee") {
			cout << "Coffee out of stock!\n";
			cout << "No coffee for you!\n";
		}
		else if (acx == "hack") {
			cout << "No.\n";
			continue;
			cout << "Password: ";
			string uPass;
			cin >> uPass;
			if (uPass == "C++") {
				coins = coins + 9999999999;
				paper = paper + 9999999999;
			}
			else {
				cout << "Incorrect!";
			}
		}
		else if (acx == "cls" || acx == "CLS" || acx == "Cls") {
			system("CLS");
		}
		else if (acx == "spam"){
			cout << "Spamming 100000 charecters\n";
			Sleep(1000);
			int a = 0;
			int b = 0;
			char chars[92] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', '[', ']', ';', ',', '.', '/', '~', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '_', '+', '{', '}', '|', ':', '<', '>', '?', 'Q', 'W', 'E', 'R', 'T', 'Y,', 'U', 'I', 'O', 'P', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M' };
			while (a == 0) {
				if (b < 100000) {
					char letter = chars[rand() % 91 + 1];
					cout << letter;
					b++;
				}
				else {
					a = 1;
					break;
				}
			}
			cout << "\nSpam ended\n";
		}
		else if (acx == "exit") {
			break;
		}
		else {
			continue;
		}
	}
}


 
