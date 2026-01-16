//#include <iostream>
//#include <cstdlib> // for std::exit()
//
//// std::exit() can be used to terminate the program. its called implicitly at the final line of the program
//// but it can also be used to terminate early. It flushes memory and returns control to the OS so its useful to have.
//
//void cleanup() {
//	std::cout << "cleanup running." << '\n';
//}
//
//
//
//int main() {
//	
//	std::cout << "Will you carry on?: Y (yes) / N (no)" << '\n';
//	
//		char userInput{ 0 };
//		std::cin >> userInput;
//
//		switch (userInput == 'Y') {
//		
//		case true:
//			std::cout << "Your memory will carry onn" << '\n';
//			std::cout << "We'll carry onnnnnn" << '\n';
//			std::cout << "And in my heart I cant contain it" << '\n';
//			std::cout << "The anthem wont explain it" << '\n';
//			std::cout << "..." << '\n';
//
//			break;
//
//		case false:
//			std::cout << "I get that, but you really should move on.";
//			std::exit(0);
//			
//		}
//
//		// Because std::exit() terminates immediately it can be dangerous. It doesn't get rid of local variables on the stack
//		// and you might run into issues if you didn't deallocate memory & close network connections you had running.
//		// C++ offers a function to call any code you've written for cleanup ahead of time called atexit()
//
//		// std::atexit(...) and you input your cleanup functions
//		// you should almost ever use halts though.
//
//}