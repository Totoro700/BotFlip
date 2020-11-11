/*
 _____________
|
|
|
|
|
|
|                       |          |
|                    -------    -------
|_____________          |          |

*/


#include <iostream>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

int main(){
	string acx;
	int coins = 0;
	int paper = 1;
	while (TRUE) {
		cin >> acx;
		if (acx == "help") {
			cout << "help - Displays this help message\n";
			cout << "playCoins - Play for a chance to get coins!\n";
			cout << "playPaper - Play for a chance to get paper!\n";
			cout << "coins - See all the coins you have\n";
			cout << "paper - See all the paper you have\n";
			cout << "sell - Sell the paper you have\n";
			cout << "steal - [None] \n";
			cout << "NULL - NULL\n";
			cout << "givemecoffee - Gives you coffee\n";
		}
		else if (acx == "playCoins") {
			int rNum = rand() % 9 + 1;
			int wNum;
			cout << "Guess the random number (1 to 10)\n";
			cin >> wNum;
			if (wNum == rNum) {
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
			cout << "No coffee for you!\n";
		}
		else if (acx == "hack") {
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
		else {
			continue;
		}
	}
}


 
