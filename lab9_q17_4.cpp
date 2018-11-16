// This is a library
#include <iostream>
using namespace std;


int compare(char* a,char*b)       //Declaring a function
{
    int result=0;
        for (int i = 0;*(a+i)!='\0' || *(b+i)!='\0' ; i++)
        {
            if (*(a+i) != *(b+i))                //Defining the conditions for the function
            {
                result= *(a+i)-*(b+i);
                break;
            }
        }
    return result;

}
int main()                 //Driver function
{
    //Declaring inItial string
    char str[20];
    cout<<"Enter string"<<endl;
    cin.getline(str,20);      //Asking for the string


    //Implementation of strcmp function
    cout<<"Use of strcmp function"<<endl;
	char str4[20];
	cout<<"Enter other string"<<endl;
	cin.getline(str4,20);        //Asking for another string
    int result=compare(str,str4);//Compares the length of two strings
    if(result==0)
    cout<<"Strings are same"<<endl;
    else if(result>0)
    cout<<"The ASCII value of the character of str after 1st mismatch is more than that of str2 with ASCII difference:"<<result<<endl;
    else
    cout<<"The ASCII value of the character of str after 1st mismatch is less than that of str2 with ASCII difference:"<<result<<endl;

    return 0;
}
