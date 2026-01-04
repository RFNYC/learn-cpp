#include <iostream>

// floats and doubles are data types that store more accurate numbers up to a certain amount of decimals.
// floats up to about 7 extra digits before filling with noise while doubles can work with precision of about 15.
// its better to use double for most calculations. 

double getNum(int numberCount) {

    double chosen_operand{ 0 };
    std::cout << "Opperand " << numberCount + 1 << ":" << '\n';
    std::cin >> chosen_operand;
    numberCount += 1;

    return chosen_operand;
}

char getOperation() {

    char chosen_operator{};
    std::cout << "What operation will you perform? EX: + , - , *, /" << "\n";
    std::cin >> chosen_operator;

    return chosen_operator;
}

double doOperation(double operand1, double operand2, char chosen_operation) {

    double result = { 0 };

    // double quotes are used for string literals (const char*) like   : "+"  
    // single quotes are used for single characters (char) like        :  -

    if (chosen_operation == '+') {
        result = operand1 + operand2;
    }
    else if (chosen_operation == '-') {
        result = operand1 - operand2;
    }
    else if (chosen_operation == '*') {
        result = operand1 * operand2;
    }
    else if (chosen_operation == '/') {
        result = operand1 / operand2;
    }

    return result;

}



int main()
{
    int numberCount{ 0 };

    std::cout << "----- CPP CALCULATOR -----" << "\n";

    double num1{ getNum(numberCount) };
    double num2{ getNum(numberCount) };
    char myoperation{ getOperation() };

    double result{ 0 };
    result = doOperation(num1, num2, myoperation);

    std::cout << "----- Your Result: ------" << "\n";
    std::cout << result << std::endl;

}
