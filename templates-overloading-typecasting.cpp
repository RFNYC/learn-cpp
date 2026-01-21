#include <iostream>
#include <string>
#include "convenience.h"
using String = std::string;


// Using templates in this way allows 
// creating placeholder type called T
template <typename T>

// creating template for add functions 
T add(T x, T y) {
	return x + y;
}

int main() {

	// if you remove either of these explicit casts the program fails to compile. 
	// this is because both of these are narrowing conversions and automatically cause warnings.
	// we treat warnings as errors so it just stops the program outright.

	// cant run this function without explicit conversion due to narrowing.
	double mynum{ 20.0 };
	printInt(static_cast<int>(mynum));

	// cant initialize this way without explicit conversion due to narrowing.
	int mynum2{ static_cast<int>(20.0) };
	std::cout << mynum2 << '\n';

	String mystring{ "This is my string" };
	std::cout << mystring << '\n';

	std::cout << "---------------------------" << "\n";
	std::cout << "function overloading: " << '\n';
	std::cout << add(1, 2) << '\n';
	std::cout << add(3.42, 9.67) << '\n';
	std::cout << add(1, 2.34, 6.55) << '\n';

	print("Hello World");
	
	// type deduction in templates:
	// normal template call syntax
	std::cout << add<int>(5, 5) << '\n';
	// type deduction
	std::cout << add(1.2, 15.23) << '\n';

	return 0;
}