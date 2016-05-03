#include<iostream>
#include<cmath>
using namespace std;

//this version only runs from command line operators. No continuous mode.

int main(int args, char* argv[]) {
	//if no arguments given.
	if (args == 1) {
		cout << "No numbers given.\n";
		return 1;
	}
	//An even number of arguments above two cannot work.
	if (args > 2 && args % 2 == 0) {
		cout << "Invalid number of numbers and operators.\n";
		return 1;
	}
	if (args == 2){
		if (*argv[1] == '?' || *argv[1] == 'h' || *argv[1] == 'H') {
			cout << endl << "This is a command line arithmetic calculator.\n\n";
			cout << "Usage: calc [first number] [operator] [second number]\n";
			cout << "Optionally, more than two numbers can be operated on, but must be separated by an operator.\n\n";
			cout << "Accepted operators:\n";
			cout << "+ Addition\n";
			cout << "- Subtraction\n";
			cout << "* Multiplication\n";
			cout << "/ Division\n";
		}
	}
	//if no errors caught, proceed.
	cout << "No errors, proceeding.\n";
	//mash multiple arguments into a single string...
}