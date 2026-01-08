#include <iostream>

int getNum(int counter, int num) {

	if (counter > 0) {
		std::cout << "Enter another number: " << '\n';
		std::cin >> num;
	} else {
		std::cout << "Enter a number: " << '\n';
		std::cin >> num;
	}
	
	return num;
}

int main() {
	
	/*
		Write a function called calculate() that takes two integers and a char representing one of the following mathematical 
		operations: +, -, *, /, or % (remainder).
		Use a switch statement to perform the appropriate mathematical operation on the integers, and return the result. 
		If an invalid operator is passed into the function, the function should print an error message. For the division operator, do 
		an integer division, and don’t worry about divide by zero.
	*/
	
	std::cout << "--- Calculator 2 ---" << '\n';

	int counter{ 0 };
	int num1{ 0 };
	int num2{ 0 };

	num1 = getNum(counter, num1);
	++counter;

	num2 = getNum(counter, num2);

	std::cout << '\n';

	checkpoint:
		std::cout << "What operation would you like to perform?: " << '\n';

		char given_operator{};
		std::cin >> given_operator;

		switch (given_operator) {
		
		case '+':
			std::cout << "You chose addition: " << '\n';
			std::cout << num1 << "+" << num2 << "=" << num1 + num2 << '\n';
			break;

		case '-':
			std::cout << "You chose subtraction: " << '\n';
			std::cout << num1 << "-" << num2 << "=" << num1 - num2 << '\n';
			break;

		case '*':
			std::cout << "You chose multiplication: " << '\n';
			std::cout << num1 << "*" << num2 << "=" << num1 * num2 << '\n';
			break;

		case '/':
			std::cout << "You chose division: " << '\n';
			std::cout << num1 << "/" << num2 << "=" << num1 / num2 << '\n';
			break;

		case '%':
			std::cout << "You chose to find the modulo operator: " << '\n';
			std::cout << num1 << "%" << num2 << "=" << num1 % num2 << '\n';
			break;

		default:
			std::cout << "Invalid operator recieved. Please try again." << '\n';
			std::cout << '\n';
			goto checkpoint;
		}

	return 0;
}