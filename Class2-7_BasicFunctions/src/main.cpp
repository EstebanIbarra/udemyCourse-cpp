#include <iostream>
#include "../headers/basicOperations.h"

using namespace std;

/**
 * @brief Prints a character a definite number of times before ending the line
 * 
 * @param character 
 * @param times 
 */
void printChar(char character, int times)
{
    if (times > 0)
    {
        for (int i = 0; i < times; i++)
        {
            cout << character;
        }
    }
    else cout << '\n';
    cout << endl;
}

int main()
{
    int number1, number2;
    cout << "Please insert a number: ";
    cin >> number1;
    cout << "Please insert a second number: ";
    cin >> number2;
    cout << '\n';
    int result = sum(number1, number2);
    printChar('#', result);
    result = sub(number1, number2);
    printChar('#', result);
    result = mul(number1, number2);
    printChar('#', result);
    result = division(number1, number2);
    printChar('#', result);
    result = mod(number1, number2);
    printChar('#', result);
    return 0;
}