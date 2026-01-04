// Including my headerfile
#include "external.h"
#include <iostream>
#include <string>

// forward declaration. 
// linker will retrieve the function from the helper file later.
float my_addition( float x, float y);

// If I had more than one function my_addition or two files with the same identifier this program
// would not compile. Either one or the other, otherwise a naming collision occurs.
// See external.h for my namespace.

// Namespace aliases, allow you to make shortcuts to nested namespaces for easy access.
// can be called later by doing Active::func()
namespace Active = Rtools::Misc::Legacy;

int main() {
	std::cout << "Hello! This is my main workspace." << '\n';
	std::cout << "---------------------------------" << '\n';

	// std::cout << my_addition(10, 24.2) << '\n';

	// to use the namespace version, write the same syntax you would to access cout - but for Rtools.
	std::cout << Rtools::my_addition(10.23343553, 21.2343445) << '\n';

	std::cout << "Try printing out a sentence: " << '\n';
	std::string my_sentence{};

	// remember when taking user input to get around databuffer you need to make use of std::getline and std::ws
	// std::getline ofc gets the full line, std::ws removes leading white space
	std::getline(std::cin >> std::ws, my_sentence);

	// using Rtools namespace
	Rtools::Misc::printer(my_sentence);

}
