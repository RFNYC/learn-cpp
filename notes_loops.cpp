#include <iostream>
#define PASS

void print(int x) {
	std::cout << x << '\n';
}

int main() {
	
	// while loops run when the given expression evaluates to true.
	// If you want to intentionally create an infinite loop:
	/*while (true) {
		std::cout << "inf" << '\n';
		std::cout << "loop" << '\n';
	}*/

	// for loop  -> functionally the same as javascript, just diff syntax
	// broken down into 4 parts: countervar, expression, end-expression (usually incrementing), function body
	for (int i{ 0 }; i <= 10; ++i) {
		print(i);
	}
	
	std::cout << "---- separator ----" << '\n';

	// same output can be achieved using a while loop. you gotta make a nested block first though.
	{
		int i{ 0 };
		while (i <= 10) {
			print(i);
			++i;
		}

		// i iterator is destroyed here since the block ends.
	}

	std::cout << "---- separator ----" << '\n';

	// this is actually news to me. a for loop with two iterators??? :sob:
	// basically, in the initialization section you can init multiple variables and in the end expresion you may
	// increment both of them. this lets you get funky stuff like this.
	for (int x{ 0 }, y{ 9 }; x < 10; ++x, --y) {
		std::cout << x << ' ' << y << '\n';
	}

		 
	return 0;
}