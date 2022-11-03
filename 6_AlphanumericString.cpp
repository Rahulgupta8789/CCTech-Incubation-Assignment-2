//Q6.Write a program to accept a string and check if all the characters in the string are alphanumeric.

#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string : ";
    cin.get(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!isalnum(str[i]))
        {
            cout << str[i] << " is not alphanumeric" << endl;
        }
        else
        {
            cout << str[i] << " is alphanumeric" << endl;
        }
    }
}