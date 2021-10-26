#include <iostream>
#include "../headers/basicOperations.h"

int main()
{
    using namespace std;
    int number1 = 2, number2 = 3, result = sum(&number1, &number2);
    /* sum function */
    cout << "The sum of the numbers: " << number1 << " and " << number2 << " is: " << result << endl;
    result = 0;
    /* addVal function */
    cout << "\nThe memory address and values of the variables are:" << endl;
    cout << "number1:\t" << &number1 << "\t\tvalue:\t" << number1 << endl;
    cout << "number2:\t" << &number2 << "\t\tvalue:\t" << number2 << endl;
    cout << "result: \t" << &result << "\t\tvalue:\t" << result << endl;
    addVal(&number1, &number2, &result);
    cout << "\nAfter applying the addVal function, the result variable is:" << endl;
    cout << "result: \t" << &result << "\t\tvalue:\t" << result << endl;
    /* swap function */
    cout << "\nThe memory address and values of the variables are:" << endl;
    cout << "number1:\t" << &number1 << "\t\tvalue:\t" << number1 << endl;
    cout << "number2:\t" << &number2 << "\t\tvalue:\t" << number2 << endl;
    swap(&number1, &number2);
    cout << "\nAfter applying the addVal function, the memory address and values of the variables are:" << endl;
    cout << "number1:\t" << &number1 << "\t\tvalue:\t" << number1 << endl;
    cout << "number2:\t" << &number2 << "\t\tvalue:\t" << number2 << endl;
    /* factorial function */
    number1 *= number2;
    result = 0;
    cout << "\nThe memory address and values of the variables are:" << endl;
    cout << "number1:\t" << &number1 << "\t\tvalue:\t" << number1 << endl;
    cout << "result: \t" << &result << "\t\tvalue:\t" << result << endl;
    factorial(&number1, &result);
    cout << "\nAfter applying the factorial function, the result variable is:" << endl;
    cout << "result: \t" << &result << "\t\tvalue:\t" << result << endl;
    return 0;
}