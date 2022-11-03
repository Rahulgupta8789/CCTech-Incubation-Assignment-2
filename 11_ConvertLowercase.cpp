//Q11.Write a program to accept a string and convert all its characters to lower case.

#include <iostream>
using namespace std;

void lower_string(string str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')    //checking for uppercase characters
			str[i] = str[i] + 32;              //converting uppercase to lowercase
	}
	cout<<"\n The string in lower case : "<< str;
}

int main()
{
    char str[500];
    cout<<"Enter the string : ";
    cin.getline(str, 500);
    lower_string(str);                          //function call to convert to lowercase
	
	return 0;
}

