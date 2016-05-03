//// Calculator app by Tyson LaFollette.
////Made using Visual Studio 2013.
////Does arithmetic from the command line.
//
////Needs to accept input as a single argument, without spaces for easier use.
//
//#include "iostream"
//#include "string"
//#include "cmath"
//
//using namespace std;
//
//void parseInput(string & input, long double & num1, long double & num2, char & operation);
//string calculate(long double num1, long double num2, char operation);
//void continuousMode(string &input, long double &num1, long double &num2, char &operation);
//void singleMode(string &input, long double &num1, long double &num2, char &operation, char *argv[]);
//void help(char* argv[]);
//
//int main(int argc, char *argv[])
//{
//	string input;
//	long double num1;
//	long double num2;
//	char operation;
//
//	switch (argc){
//	case 1:
//		continuousMode(input, num1, num2, operation);
//		break;
//	case 2:
//		help(argv);
//		break;
//	case 3:
//		singleMode(input, num1, num2, operation, argv);
//		break;
//	case 4:
//		singleMode(input, num1, num2, operation, argv);
//		break;
//	default:
//		cout << "Invalid input. Type -h for help.";
//		cout << argc;
//	}
//	return 0;
//}
//
//void parseInput(string & input, long double & num1, long double & num2, char & operation){
//	//splits the input into three parts. num1, operation, and num2. Assigns them appropriate data types.
//	string tempStr;
//	char gotChar;
//	
//	//grab characters until a space.
//	gotChar = input[0];
//	input.erase(0,1);
//	while (gotChar != ' '){
//		tempStr+= gotChar;
//		gotChar = input[0];
//		input.erase(0, 1);
//	}
//
//	//assign value to num1, skip space
//	num1 = stod(tempStr);
//	tempStr.clear();
//
//	//grab and assign character for operation.
//	gotChar = input[0];
//	input.erase(0, 1);
//	operation = gotChar;
//
//	//skip second space.
//	input.erase(0, 1);
//	
//	//grab characters until null character.
//	gotChar = input[0];
//	input.erase(0, 1);
//	while (gotChar != '\0'){
//		tempStr += gotChar;
//		gotChar = input[0];
//		input.erase(0, 1);
//	}
//
//	//assign value to num2.
//	num2 = stod(tempStr);
//}
//string calculate(long double num1, long double num2, char operation){
//	//based on operation, calculates.
//	switch (operation){
//	case '+':
//		return to_string(num1 + num2);
//		break;
//	case '-':
//		return to_string(num1 - num2);
//		break;
//	case '*':
//		return to_string(num1 * num2);
//		break;
//	case '/':
//		return to_string(num1 / num2);
//		break;
//	case '^':
//		return to_string(pow(num1, num2));
//		break;
//	case '%':
//		return to_string((int)num1 % (int)num2);
//		break;
//	default :
//		return "ERROR";
//		break;
//	}
//}
//void continuousMode(string &input, long double &num1, long double &num2, char &operation){
//	//continuous mode.
//	string output;
//	cout << "Calculator. Enter 0 to exit." << endl << "Enter computation: ";
//	getline(cin, input);
//	//Loop until exit key is pressed.
//	while (input != "0"){
//		parseInput(input, num1, num2, operation);
//		output = calculate(num1, num2, operation);
//		cout << endl << output << endl;
//		cout << "Enter 0 to exit. Next calculation : ";
//		getline(cin, input);
//	}
//}
//void singleMode(string &input, long double &num1, long double &num2, char &operation, char* argv[]){
//	string output;
//	//single calculation mode.
//	input.append(argv[1]);
//	input.append(" ");
//	input.append(argv[2]);
//	input.append(" ");
//	input.append(argv[3]);
//	parseInput(input, num1, num2, operation);
//	output = calculate(num1, num2, operation);
//	cout << output << endl;
//}
//void help(char* argv[]){
//	string argument;
//	argument = argv[1];
//	if (argument == "-h" || argument == "-help" || argument == "/h" || argument == "/help" || argument == "help" || argument == "h" || argument == "--h" || argument == "--help"){
//		cout << "Calc does basic arithmetic. All output is formatted as decimals." << endl << endl;
//		cout << "Usage: calc.exe [first_number] [operator] [second_number]" << endl << endl;
//		cout << "Operators:" << endl;
//		cout << "+	Addition." << endl;
//		cout << "-	Subtraction." << endl;
//		cout << "*	Multiplication." << endl;
//		cout << "/	Division." << endl;
//		cout << "%	Modulo." << endl;
//		cout << "^^	Exponent. Raises first_number to the power of second_number." << endl << endl;
//		cout << "If given no arguments, then calc will run in continuous mode, allowing for easy input of multiple calculations." << endl << endl;
//		cout << "At this time input needs to be separated by spaces. EX. 1 + 2 would work, but 1+2 would not.";
//	}
//}