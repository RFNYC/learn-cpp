#include <iostream>
#include "convenience.h"

int main() {
	
	// initializing a pointer | asterisk designates the variable to be a pointer. nullptr points to nothing (address 0)
	void* ptr{ nullptr };

	// anytime you initialize something you create a space for it in memory.
	std::cout << "Type a sentence, I'll store it into memory." << '\n';
	std::string userInput{ getStringInput() };

	// initializes a pointer which asks userInput object for its location in memory.
	void* usefulPtr{ &userInput };
	
	std::cout << "Your string was stored at the address: " << usefulPtr << '\n';
	std::cout << "Now choose a number: " << '\n';

	double numInput{ getNumInput() };
	double* numPtr{ &numInput };

	// Assuming you only have the pointer, how do you access the variable?. You need to dereference it.
	// So in the same way putting an asterisk after the type classifies this as a reference to memory,
	// putting an asterisk out in front means you're accessing memory.
	std::cout << "Your number was stored at address: " << numPtr << '\n';
	std::cout << "Number accessed: " << *numPtr << std::endl;
	
	// Since using *numPtr is directly accessing whats stored in memory we can manipulate it.
	std::cout << "What would you like the next number to be?: " << '\n';

	// this basically says get the information numPtr is accessing and then overwrite it with the result of getInput()
	*numPtr = getNumInput();

	std::cout << *numPtr << " was stored at address: " << numPtr << std::endl;
}