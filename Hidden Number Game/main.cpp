#include <iostream>;
using namespace std;
int main()
{
	//defining varables
	const int hidden_number = 375;
	int guesses = 0;
	int inputed_number = 0;
	//Asking for number start of while loop
	cout << "Welcome to the hidden number game! You must guess the hidden whole number in as less guesses as possible" << endl;
	do {
		cout << "Please input your guess (0-1000): ";

		//Changing varables
		cin >> inputed_number;
		guesses = guesses + 1;
		//Determining whther it is lower or higher or correct
		if (inputed_number > hidden_number) {
			cout << "You didn't guess the number correctly, try again." << endl;
			cout << "The number you entered was greater than the hidden number" << endl;
		}
		else if (inputed_number < hidden_number) {
			cout << "You didn't guess the number correctly, try again." << endl;
			cout << "The number you entered was smaller than the hidden number" << endl;
		}
		//Breaking loop
	} while (inputed_number != hidden_number);
	cout << "Congratulations! You guessed the number correctly. It took you " << guesses << " to get it right";
}