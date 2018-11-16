// This is a library
#include <iostream>
using namespace std;

// returns true if X and Y are same
int compare(const char *str1, const char *str2)    //Declaring the function to compare
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)             //Defining the conditions for the function
			return 0;
		str1++;
		str2++;
	}

	return (*str2 == '\0');
}

// Declaring Function to implement strstr() function
const char* strstr(const char* str1, const char* str2)
{
	while (*str2 != '\0')
	{
		if ((*str1 == *str2) && compare(str1, str2))       //Defining the conditions for the function
			return str1;
		str2++;
	}

	return NULL;
}

// Implementing strstr function in C++
int main()                  //Driver function
{
	char str1[50];
	cout<<"Enter string1:"<<endl;
	cin.getline(str1,50);      //Asking for the string
	char str2[50];
	cout<<"Enter string2:"<<endl;
        cin.getline(str2,50);    //Asking for another string
	cout<< strstr(str1, str2);     //Calling the function

	return 0;
}
