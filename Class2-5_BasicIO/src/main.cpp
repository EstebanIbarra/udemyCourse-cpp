#include <iostream>
int main()
{
    using namespace std;
    int age = 0;
    char nameBuffer[512];
    cout << "Please insert your name: ";
    cin.getline(nameBuffer, 64, '\n');
    cout << "Please insert your age: ";
    cin >> age;
    cout << "\nYour name is " << nameBuffer << " and you're " << age << " years old." << endl;
    return 0;
}