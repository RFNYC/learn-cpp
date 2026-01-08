#include <iostream>

void fizzbuzz(int x) {
	for (int i{ 1 }; i <= x; ++i) {
		if (i % 3 == 0 && i % 5 == 0) {
			std::cout << "fizzbuzz";
		} else if (i % 3 == 0) {
			std::cout << "fizz" << '\n';
		} else if (i % 5 == 0){
			std::cout << "buzz" << '\n';
		} else {
			std::cout << i << '\n';
		}
	}
}

int main() {
	
	/*
	The rules of the game are simple: Starting at 1, and counting upward, replace any number divisible only by three 
	with the word “fizz”, any number only divisible by five with the word “buzz”, and any number divisible by both 3 
	and 5 with the word “fizzbuzz”. Input: 15
	*/

	fizzbuzz(15);

	return 0;
}