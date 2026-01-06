#include <iostream>

// Write a function int accumulate(int x). 
// This function should return the sum of all of the values of x that have been passed to this function.

int accumulate(int addend) {

    // initialize counter variable (variable to be accumulated)
    static int counter{ 0 };
    // increment
    counter = counter + addend;

    return counter;
}

int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}