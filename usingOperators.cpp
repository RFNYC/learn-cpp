# include <iostream>

// check whether or not integer is even
constexpr bool isEven(int x) {
	
	// in cpp true/false values are returned in 0, 1 format rather than strings.
	// for this reason its more useful to just check for truthiness / existence and basing the answer off that 
	// rather than returning if its true or not.

	// boils things down to if isEven() == 1 or if isEven() == 0
	return (x % 2 == 0);

} 

int main() {
	
	// Integer on Integer division:
	// Returns a whole number only. drops fractional portion.
	double result = { 7 / 4 }; // should = 1.75, outputs 1
	std::cout << result << '\n';

	double second_result = { static_cast<double>(7) / 4 };
	std::cout << second_result << '\n';

	// For conevience you can use shorthand on your operations. For example:
	// multiplying result and setting it to a new value:
	result *= 3; // should return 3 now

	std::cout << result << '\n';

	// modulo (remainder operator) -- returns the remainder of a given expression *after* doing the division on it.
	// check if X divides evenly by Y
	int x{ 10 };
	int y{ 5 };

	if (x % y == 0) {
		std::cout << "Yes, X is divisible by Y." << '\n';
	} else {
		std::cout << "No, X is NOT divisible by Y." << '\n';
	};

	// modulo operator also takes on the signs of given numbers.

	// is even check
	std::cout << "What number do you want to check for even/odd?: " << '\n';
	int num{ 0 };
	std::cin >> num;

	if (isEven(num)) {
		std::cout << num << " is even\n";
	} else {
		std::cout << num << " is odd\n";
	}

	// CONDITIONAL (TERNARY) OPERATOR
	// FORM:  C ? X : Y
	// EXPLANATION: IF C TRUE DO X, ELSE DO Y

	isEven(num) ? std::cout << num << " is even (ternary)" << '\n' : std::cout << num << " is odd (ternary)" << '\n';


	// logical NOT,  logical AND,  logical OR
	// return true if x > 10 and even

	bool greaterEven{ isEven(num) && (num > 10) };
	greaterEven ? std::cout << "True" << '\n' : std::cout << "False" << '\n';


	return 0;

}