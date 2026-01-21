#ifndef CONVENIENCE_H
#define CONVENIENCE_H

#include <iostream>
#include <string>

using String = std::string;

void print(String string) {
	std::cout << string << '\n';
}

std::string getStringInput() {
	std::string userInput{ "" };
	std::getline(std::cin >> std::ws, userInput);

	return userInput;
}

double getNumInput() {
	double input{ 0 };
	std::cin >> input;

	return input;
}

// function overloading:
// so long as two functions have differing parameter types you can declare more
// than one with the same function name:
int add(int x, int y) {
	return x + y;
}

double add(double x, double y) {
	return x + y;
}

// you can also cause overloading by giving a different *number* of parameters
double add(double x, double y, double z) {
	return x + y + z;
	;
}

// stopping users from entering incorrect inputs:
void printInt(int x) {
	std::cout << x << '\n';
}
// delete specifier syntax: 
void printInt(char) = delete; // this halts the function if char type is passed into printInt
void printInt(bool) = delete; // this halts the function if bool type is passed into printInt

#endif // !1
