// Password generator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int length;
void generatePassword();\
char repeat;

int main()
{
	do {
	
	
		cout << "-----------------------------------------------------\n";
		cout << "|                                                   |\n";
		cout << "|                 PASSWORD GENERATOR                |\n";
		cout << "|                                                   |\n";
		cout << "-----------------------------------------------------\n";

		cout << "Welcome to my password generator!\n\n";

		generatePassword();

	
		cout << "Want to do it again? [Y/N]: ";
		cin >> repeat;
	} while (repeat == 'Y' || repeat == 'y');


	
	cout << "Thank you!!";

	return 0;
}


void generatePassword() {
	
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string symbols = "!@#$%^&*[]();:";
	string numbers = "1233456789";

	int passwordlength;
	cout << "Enter preferred length of password: ";
	cin >> passwordlength;

	srand(time(0));

	string password;
	for (int i = 0; i < passwordlength; i++) {
		int random = rand() % 4;
		char randomcharacters;
		switch (random) {
		case 0 :
			password += alphabet[rand() % alphabet.size()];
			break;

		case 1 :
			password += ALPHABET[rand() % ALPHABET.size()];
			break;

		case 2 :
			password += symbols[rand() % symbols.size()];
			break;

		case 3 :
			password += numbers[rand() % numbers.size()];
			break;

		}
	}

	cout << "Here's your password!: " << password <<endl;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
