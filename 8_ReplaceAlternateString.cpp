//Q8.Write a program to accept a string and starting with first character replace every alternate character with the '*' character.

#include <iostream>
#include <string>

using namespace std;

string replaceWithStar(string inputString) 
{
    if(inputString.length() == 0)
    {
        cout << endl << "Input string are empty !";
        return inputString;
    }
    else 
    {
        for(int i = 0; i < inputString.length(); i = i+2) 
        {
            inputString[i] = '*';
        }

        return inputString;
    }
}

int main() {
    string candidateString;

    system("cls");
    cout << endl << "Enter the string : ";
    getline(cin, candidateString);

    string result = replaceWithStar(candidateString);

    //cout << endl << "Input string : " << candidateString;
    cout << endl << "Alternate Character '*' string : " << result;

    return 0;
}