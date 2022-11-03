//Q3.Write a program to accept a string and a position P. Print the character at position P in the string.

#include <iostream>

using namespace std;

char printchar(string str, int pos)
{
    for (int i = 0; i <= str.length(); i++)
    {
        if (pos == i)
        {
            return str[i];
        }
    }
}

int main()
{
    string str;
    int position;

    cout << "Enter the string : " ;
    cin >> str;

    cout << "Enter the possition : " ;
    cin >> position;

    char charAtPosition = printchar(str, position);

    cout << "Character at  position " << position << " is : " << charAtPosition << endl;

    return 0;
}