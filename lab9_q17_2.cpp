// This is a library
#include <iostream>
using namespace std;


char* cat(char* str,char* str3)
{
	int size1=0;
	char* z=str;
	while(*z!='\0')     //Defining the conditions for the function
	{
		size1++;
		z++;
	}
	char* p=str+size1;
	while(*str3!='\0')
	{
		*p++=*str3++;
	}
	*p='\0';
	return str;
}

int main()         //Driver function
{
    //Declaring initial string
    char str[20];
    cout<<"Enter string"<<endl;
    cin.getline(str,20);         //Asking user for the string

    //Implementation of strcat function
	char str3[20];
	cout<<"Enter other string"<<endl;
	cin.getline(str3,20);        //Asking for another string
    cout<<"Output after strcat function:"<<cat(str,str3)<<endl;
    return 0;
}
