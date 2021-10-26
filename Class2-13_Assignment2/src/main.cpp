#include <iostream>
#include "../headers/basicOperations.h"

int main()
{
    using namespace std;
    int number1 = 2, number2 = 3, result = 0;
    sum(number1, number2, result);
    cout << "The sum of the numbers " << number1 << " and " << number2 << " is: " << result << endl;
    number1 *= number2;
    factorial(number1, result);
    cout << "\nThe factorial of the number " << number1 << " is: " << result << endl;
    cout << "\nThe current values of the variables are:" << endl;
    cout << "number1: " << number1 << endl;
    cout << "number2: " << number2 << endl;
    swap(number1, number2);
    cout << "\nAfter applying the swap function, the current values of the variables are:" << endl;
    cout << "number1: " << number1 << endl;
    cout << "number2: " << number2 << endl;
    return 0;
}