//Q10.Write a program to accept a string and convert all its characters to upper case.

#include <iostream>

using namespace std;

void upper_string(string str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')   //checking for lowercase characters
			str[i] = str[i] - 32;             //converting lowercase to uppercase  
	}
	cout<<"\n The string in upper case : "<< str;
}

int main()
{
    char str[500];
    cout<<"Enter the string : ";
    cin.getline(str, 500);
	upper_string(str);                        //function call to convert to uppercase

	return 0;
}