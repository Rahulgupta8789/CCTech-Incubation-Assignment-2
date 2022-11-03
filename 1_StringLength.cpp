//Q1.Write a program to accept a string and calculate its length.

#include<iostream>
using namespace std;

int main()
{
    char str[500];
    int len=0; 
    int i=0;

    cout<<"Enter the String : ";
    cin.getline(str, 500);    //getline() is used to get a line from a file line by line

    while(str[i])
    {
        len++;
        i++;
    }
    cout<<"Number of String Length = "<<len <<endl;
    cout<<endl;
    return 0;
}