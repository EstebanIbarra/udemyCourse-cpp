#include <iostream>

using namespace std;

int sum(int number1, int number2)
{
    int result = number1 + number2;
    cout << "The sum is: " << result << endl;
    return result;
}

int sub(int number1, int number2)
{
    int result = number1 - number2;
    if (result > 0) {
        cout << "The substraction is: " << result << endl;
    }
    else
    {
        cout << "The result is negative";
        result = 0;
    }
    return result;
}

int mul(int number1, int number2)
{
    int result = number1 * number2;
    cout << "The product is: " << result << endl;
    return result;
}

int division(int number1, int number2)
{
    int result = number1 / number2;
    if (result < 1)
    {
        cout << "The result is less than 1";
    }
    else
    {
        cout << "The division is: " << result << endl;
        result = 0;
    }
    return result;
}

int mod(int number1, int number2)
{
    int result = number1 % number2;
    cout << "The remainder of the division is: " << result << endl;
    return result;
}