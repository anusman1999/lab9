// This is a library
#include <iostream>
using namespace std;

int len(char* str)           //Declaring a function to return size
{
	int size=0;
	while(*str!='\0')         //Defining the conditions for the function
	{
		size++;
		str++;
	}
	return size;
}
int main()                 //Driver function
{
    //Declaring initial string
    char str[20];
    cout<<"Enter string"<<endl;
    cin.getline(str,20);       //Asking for the string

   //Implementation of strlen function
    cout<<"Use of strlen function"<<endl;
	char* p=str;               //P pointing to  str
    cout<<"Length of str:"<<len(p)<<endl;  //call of function

    return 0;
}
