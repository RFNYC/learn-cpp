#ifndef external_h
#define external_h

#include <iostream>
#include <string_view>

// --- Defining Namespaces --- | Must be defined in global scope (obviously it'd be destroyed otherwise)
// If you do need to have the same function name or cant be bothered to change them you can start your own namespace.
// the idea is that "Rtools" would come with a more precise addition function since the return type is allocated more memory.
namespace Rtools {

	double my_addition(double x, double y) {
		return x + y;
	}

	// you can also nest namespaces creating a file-like structure for your functions
	// to access youd write the following - Rtools::Misc::printer()
	namespace Misc {

		// never pass std::string as a param unless modifying, its too expensive otherwise.
		void printer( std::string_view sentence ) {
			std::cout << sentence << '\n';

		}

		namespace Legacy {
			// pretend theres deprecated code in here
		
		}
	}
}

#endif

/*
This boiler code essentially says that if helpers_h has been already included/written into a file ignore it
else define the code below. #endif ends the block. Anything written after it will not be shared to other files.
*/
