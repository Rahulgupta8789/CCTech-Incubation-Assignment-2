//Q5.Write a program to accept a string and check if all the characters in the string are alphabets.

#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
    char string[100]; 
    int flag=0; 
 
    cout<<"Enter a string : "; 
 
    cin.getline(string, 100);
 
    for(int i=0; string[i]!='\0';++i) 
    { 
        if(! (string[i]>='A'&& string[i]<='Z'|| string[i]>='a'&& string[i]<='z')) 
        { 
            flag=1; 
            break;   //if this condition is true then no need to check any other characters, so I break from for loop here 
        } 
    } 
 
    if(flag==1)
    {
        cout<<"String contain unwanted characters"; 
    }
    else 
    {
        cout<<"String contains only alphabets"; 
    }
 
    return 0; 
} 