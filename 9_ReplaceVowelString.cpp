//Q9.Write a program to accept a string and replace every vowel in the string with the '*' character.

#include <iostream>
#include <string.h>

using namespace std;

void replaceVowel(string & str)
{
    for(int i= 0;i<str.length();i++)
    {
        if((str[i]=='a') || (str[i]=='e') || (str[i]=='i') || (str[i]=='o') || 
        (str[i]=='u') || (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || 
        (str[i]=='U'))
        {
            str[i]='*';
        }
    }
    cout<<"Replace the every vowel in the string with the '*' character : "<<str<<endl;
}

int main()
{
    string str;

    cout<<"Enter the string : ";
    cin >> str;

    replaceVowel(str);

    return 0;
}