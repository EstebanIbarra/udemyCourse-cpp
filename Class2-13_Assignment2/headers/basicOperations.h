/**
 * @brief Add two numbers and return the result through a reference parameter
 * 
 * @param number1 Pointer to the first number
 * @param number2 Pointer to the second number
 * @param result Reference of a variable where the result will be stored
 */
void sum(int number1, int number2, int &result);

/**
 * @brief Find factorial of a number and return that through a reference parameter
 * 
 * @param number Number to be calculated
 * @param result Reference of a variable where the result will be stored
 */
void factorial(int number, int &result);

/**
 * @brief Swap the value of two numbers
 * 
 * @param number1 Reference to a variable storing the first number
 * @param number2 Reference to a variable storing the second number
 */
void swap(int &number1, int &number2);

#include "../src/basicOperations.cpp"