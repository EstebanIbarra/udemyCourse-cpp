#include <iostream>

void sum(int number1, int number2, int &result)
{
    result = number1 + number2;
}

void factorial(int number, int &result)
{
    result = number;
    for (int i = number; i > 1; i--)
    {
        result *= i-1;
    }
}

void swap(int &number1, int &number2)
{
    int tmp = number1;
    number1 = number2;
    number2 = tmp;
}
