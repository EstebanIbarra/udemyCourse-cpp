/**
 * @brief Adds 2 numbers and returns the sum
 * 
 * @param number1 Pointer to the first number
 * @param number2 Pointer to the second number
 * @return Sum of the numbers
 */
int sum(int *number1, int *number2);

/**
 * @brief Add two numbers and return the sum through the third pointer argument
 * 
 * @param number2 Pointer to the first number
 * @param number1 Pointer to the second number
 * @param result Pointer to the location where the result will be stored
 */
void addVal(int *number1, int *number2, int *result);

/**
 * @brief Swap the value of two integers
 * 
 * @param number1 Pointer to the first number
 * @param number2 Pointer to the second number
 */
void swap(int *number1, int *number2);

/**
 * @brief Generate the factorial of a number and return that through the second pointer argument
 * 
 * @param number Pointer to the number to be processed
 * @param result Pointer to the location where the result will be stored
 */
void factorial(int *number, int *result);

#include "../src/basicOperations.cpp"