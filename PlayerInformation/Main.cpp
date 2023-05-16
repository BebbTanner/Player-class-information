#include <iostream>
#include "Classes.h"
using namespace std;

void playerName();

void chooseChar();

int main() {
	playerInfo P;
	characterInfo C;

	//This will make a call to the playername funciton
	playerName();

	//This will make a call to the choosechar function
	chooseChar();
}


/*This function is going to ask the user for their name
and store it in the playername variable*/
void playerName() {
	playerInfo P;

	cout << "Please enter your name: " << endl;
	cin >> P.playerName;
	cout << "Welcome to the Commonwealth, " << P.playerName << endl;
}

void chooseChar() {
	characterInfo C;
	int classChoice;
	char confirmSelect;
	do {
		cout << "Please select a class to play from(0-9): " << endl;
		cout << "***************************************************" << endl;
		cout << "*           0.) NCR Ranger                        *" << endl;
		cout << "*           1.) BrotherHood Outcast               *" << endl;
		cout << "*           2.) Vault Dweller                     *" << endl;
		cout << "*           3.) Wastelander                       *" << endl;
		cout << "*           4.) The Ghoul                         *" << endl;
		cout << "*           5.) The Super Muntant                 *" << endl;
		cout << "*           6.) Mister Handy                      *" << endl;
		cout << "*           7.) Carvan Merchant                   *" << endl;
		cout << "*           8.) Enclave Deserter                  *" << endl;
		cout << "*           9.) Lone Gunslinger                   *" << endl;
		cout << "***************************************************" << endl;
		cin >> classChoice;

		switch (classChoice) {
		case 0:
			cout << "You rise through the ranks to quickly promoted to Ranger." << endl;
			cout << "You are assigned to scout the Commonwealth and see what you can find." << endl;
			break;
		case 1:
			cout << "After a disagreement the BrotherHood of Steel." << endl;
			cout << "you decided to take you T-45 Power Armor and cleanse the CommonWealth yourself." << endl;
			break;
		case 2:
			cout << "After spending years living in the vault you decide that it is your time to leave." << endl;
			cout << "You take your hunting rifle and see what the world has to offer" << endl;
		case 3:
			cout << "You have spent you entire life living in the wasteland." << endl;
			cout << "You take what you have learned and head off on a new adventure." << endl;
			break;
		case 4:
			cout << "As a ghoul you are always looked down on in the Commonwealth." << endl;
			cout << "After a disagreement with your boss that runs the bar, you leave in search of adventure." << endl;
			break;
		case 5:
			cout << "You were unable to find shelter before the bombs droped and have mutated." << endl;
			cout << "Your only purpose in the Commonwealth is to destroy those who are not a super muntant." << endl;
			break;
		case 6:
			cout << "When the bombs fell your master left to seek shelter, he never returned." << endl;
			cout << "Now all alone you do whatever your programing tells you to do in order to survive." << endl;
			break;
		case 7:
			cout << "You have worked for the Crimison Carvan Company for the last 10 years." << endl;
			cout << "Your boss tells you to grab your things and start searching for new customers." << endl;
			break;
		case 8:
			cout << "You have servered years working for the Enclave, but you no longer believe in their values." << endl;
			cout << "One day while no one is looking you take your X-01 Power Armor and leave to find something more." << endl;
			break;
		case 9:
			cout << "You have spent your entire life learing the ins and outs of Guns." << endl;
			cout << "While in a local bar you hear someone bring up the Commonwealth, and leave to find work there" << endl;
			break;
		default:
			cout << "Please make a selection(0-9)!" << endl;
			break;
		}

		cout << "Are you sure this is the class you want to play(Y or N)? " << endl;
		cin >> confirmSelect;

	} while (confirmSelect == 'N' || confirmSelect == 'n');
}