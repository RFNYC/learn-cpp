#include <iostream>

/*
Write a program that asks the user to enter two integers, one named smaller, the other named larger. If the user enters a smaller 
value for the second integer, use a block and a temporary variable to swap the smaller and larger values. 
Then print the values of the smaller and larger variables. Add comments to your code indicating where each variable dies. 

Note: When you print the values, smaller should hold the smaller input and larger the larger input, 
no matter which order they were entered in.
*/

double getNum() {

	double num{ 0 };
	std::cin >> num;

	return num;
}

int main() {
	
	std::cout << "--- Smaller & Larger ---" << '\n';
	std::cout << "Enter an integer: " << '\n';
	double smaller{ getNum() };

	std::cout << "Enter a larger integer: " << '\n';
	double larger{ getNum() };

	if (smaller > larger) {
		
		std::cout << "Incorrect order. Swapping variable values.\n";
		double temp{ 0 };
		temp = smaller;
		smaller = larger;
		larger = temp;
		
	}

	std::cout << "The larger integer is: " << larger << '\n';
	std::cout << "The smaller integer is: " << smaller << '\n';

}