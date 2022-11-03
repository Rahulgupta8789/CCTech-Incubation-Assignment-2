//Q7.Write a program to accept a string and check if all the characters in the string are digits.

#include <iostream>
#include <string>

using namespace std;

bool isDigit(string inputString) 
{
    bool flag = true;
    
    if(inputString.empty()) 
    {
        cout << endl << "String is input";
        flag = false;
    }
    else 
    {
        for(int i=0; i < inputString.length(); ++i) 
        {
            if(inputString[i] >=48 && inputString[i] <=57) 
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }

    return flag;
}

int main() 
{
    string candidateString;

    system("cls");
    cout << endl << "Enter string : ";
    getline(cin, candidateString);

    if(isDigit(candidateString)) 
    {
        cout << endl << "All characters present in the string are digits";
    }
    else 
    {
        cout << endl << "All character present in the string are not digits";     
    }

    return 0;
}