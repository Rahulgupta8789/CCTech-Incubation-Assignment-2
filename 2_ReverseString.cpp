//Q2.Write a program to accept a string and reverse it.

#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50], temp;
    int i, j;

    cout << "Enter a string : ";
    cin.getline(str, 50);    //getline() is used to get a line from a file line by line
    
    j = strlen(str) - 1;

    for (i = 0; i < j; i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout << "\nReverse string : " << str;
    return 0;
}