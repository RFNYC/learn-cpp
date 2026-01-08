#include <iostream>
#define PASS

int main() {
	
	// Switch statements

	// Hypothetical: lets say we have 3 user states, Authenticated, Banned, Doesn't Exist. | 0, 1, 2
	// If the output from whatever doesn't give that we just pass.

	int evaluation{};
	std::cout << "0: AUTH, 1: BANNED, 2: DNE, 3: DEBUG" << '\n';
	std::cin >> evaluation;

	switch (evaluation) {

		case 0:
			std::cout << "This user was successfully authenticated." << '\n';
			break;
		
		case 1: 
			std::cout << "This user is *BANNED*, failed authentication." << '\n';
			break;

		case 2:
			std::cout << "This user does not exist. Cannot authenticate." << '\n';
			break;

		case 3:
			goto skip_checkpoint;
		
		default: 
			std::cout << "Unknown Response. Please check your inputs." << '\n';
			break;
		
	}


// statement labels have a weird scope. They can be called from before or after they are written. 
// This allows you to jump over sections of code or jump back to a certain point if need be.

skip_checkpoint:
	std::cout << "Program finished proccessing!" << '\n';
		
	return 0;
}
