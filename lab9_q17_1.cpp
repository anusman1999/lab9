// This is a library
#include <iostream>
using namespace std;

char* copy(char* str2,char* str)
{
	if (str==NULL)         //Defining the conditions
		return NULL;
	char* ptr=str2;
	while(*str!='\0')
	{
		*str2=*str;
		str2++;
		str++;
	}
	*str2='\0';
	return ptr;
}

int main()         //Driver function
{
    //Declaring initial string
    char str[20];
    cout<<"Enter string"<<endl;
    cin.getline(str,20);   //Asking the user for the string

    //Implementation of string function
    char str2[20];
    cout<<"Output of str2:"<<copy(str2,str)<<endl;
    return 0;
}
