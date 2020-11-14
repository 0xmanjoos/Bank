#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <unistd.h>

using namespace std;

int money;
void transfer() {

    int in;
    int john = 15000;
    int jane = 30000;
    int jack = 3;
    cout << "Enter the number of who you want to transfer money to\n";
    cout << "John[1]" << endl;
    cout << "Jane[2]" << endl;
    cout << "Jack[3]" << endl;
    cout << "Enter: ";
    cin >> in;

    switch (in) {


    case 1:
    	int sum;
        cout << "John seems to be doing well, financially speaking..";
        sleep(1);
        cout << "\nHow much money do you want to send: ";
        cin >> sum;
        if (money > sum) {
            int totale = money - sum;
            cout << "Money transfered successfully!" << endl;
            cout << "You have " << totale << " dollars left" << endl;
        } else {
            cout << "You do not have that much money";
        }
        break;


    case 2:
        int cum;
        cout << "Jane seems to be one sick rich bastard dont you think?\n";
        sleep(1);
        cout << "I wonder if shes got a sugar daddy eh?\n";
        sleep(1);
        cout << "anyways, forget my rambling, how much money do you want to transfer?\nEnter:";
        cin >> cum;
        if (money > cum) {
            int totalee = money - cum;
            cout << "Money transfered successfully!" << endl;
            cout << "You have " << totalee << " dollars left" << endl;
        } else {
            cout << "You do not have that much money";
        }
        break;


    case 3:
        cout << "You made the right choice pal, jack currently has 3 bucks in his account\n";
        sleep(1);
        cout << "How much money do you want to send: ";
        cin >> sum;
        if (money > sum) {
            int total = money - sum;
            cout << "Money transfered successfully!" << endl;
            cout << "You have " << total << " dollars left" << endl;
        } else {
            cout << "You do not have that much money";
        }

        break;

    }
}

void Deposit() {
    int depo;
    int toootal;
    cout << "\nHow much money do you want to deposit?\n";
    cout << "Enter: ";
    cin >> depo;
    if(depo > 10001) {
        cout << "Sir, there seems to be an error here, you work a 9-5 job at mcdonalds" << endl;
        sleep(3);
        cout << "We have called the police, they will be here in a moment for questioning" << endl;
        sleep(2);
        cout << "*You slowly step away from the counter, and begin to run*" << endl;
        sleep(2);
        cout << "You were too sloppy in depositing your dirty money" << endl;
        sleep(1);
        cout << "You can never show your face there again" << endl;
        sleep(1);
    } else {
    toootal = money + depo;
    cout << "Success!\n";
    cout << "You now have " << toootal << " dollars in your account now";

    }

}

void Withdraw() {
    int draw;
    cout << "You currently have " << money << " in your account" << endl;
    cout << "How much money do you want to withdraw?";
    cout << "Enter: ";
    cin >> draw;
    int tooooootal = money - draw;
    cout << "You withdrew " << draw << " amount of money";
    sleep(1);
    cout << "You now have " << tooooootal << " amount of money left";

}



int main() {

	srand(time(0));
	money = 1+(rand()%10001);
	int inp2;

    cout << "\nyou have " << money << " dollars" << endl;

    cout << "Welcome!\n";
	cout << "[1] Deposit\n";
	cout << "[2] Transfer\n";
	cout << "[3] Withdraw\n";
	cout << "[4] Exit\n";
    cout << "Enter: ";
	cin >> inp2;
	switch ( inp2 ) {
	case 1:
		Deposit();
		break;
	case 2:
		transfer();
		break;
	case 3:
		Withdraw();
		break;
	case 4:
		break;
    default:
        cout << "What?, are you fucking retarded???\n";
        sleep(1);
        cout << "pick a number between 1-4 you fat schmuk";

	}

}
