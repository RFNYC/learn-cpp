//#include <string>
//#include <iostream>
//
//void printStringView(std::string_view myStr) {
//	std::cout << myStr << '\n';
//}
//
//void printString(std::string myStr) {
//	std::cout << myStr << '\n';
//}
//
//int getInput() {
//	
//	// initialize string variable
//	std::string userInput{};
//
//	// retrieve entire line of input (excluding leading white spaces - ideal outcome) 
//	std::getline(std::cin >> std::ws, userInput); // note: added std::ws here
//
//	// print to console.
//	std::cout << "You wrote: " << userInput << '\n';
//
//	// print string length
//	// sometimes written as std::string::length() in documentation
//	std::cout << "Your name is " << userInput.length() << " characters long." << std::endl;
//
//	int nameLength{ static_cast<int>(userInput.length()) };
//
//	return nameLength;
//}
//
//
//
//int main() {
//	
//	// making a new string
//	// define variable type , name, initial value
//	std::string myString{ "Big Bald Head." };
//
//	// printing string
//	std::cout << myString << std::endl;
//
//
//	// asking for user input
//	std::cout << "What's your name?: " << '\n';
//	
//	int charLength{ getInput() };
//	std::cout << "NAME LENGTH: " << charLength << '\n';
//
//
//	// Because copy initialization ( type varName { copyOfX }; ) is expensive for std::string its better
//	// to instead use the std::view version. This creates a read-only string thats less computationally expensive.
//	// however we cannot modify it though.
//	// Rather than creating string literals its most useful if its used to make a lightweight string of a return statement.
//	// 
//	// BEST PRACTICE:
//	// Prefer std::string_view over std::string when you need a read-only string, especially for function parameters.
//
//
//	std::string heavyString{ "Heavy string" };
//
//	// you can also initialize string_view objects with other std::string objects.
//	std::string_view lightWeight{ heavyString };
//	printStringView(lightWeight);
//
//	
//	// Modifying our view of object using prefixes.
//	// remove_prefix(n) to remove left chars, remove_suffix(n) to remove right chars.
//	lightWeight.remove_prefix(2);
//	lightWeight.remove_suffix(1);
//	std::cout << lightWeight << '\n';
//	
//
// }