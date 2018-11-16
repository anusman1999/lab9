// This is a library
#include <iostream>
using namespace std;
bool contains(char *n,char a)         //Declaring the function
{
    char t='\0';
    for(int i=0;*(n+i)!='\0';i++)      //Loop to check each character of string
    {
        if(*(n+i)==a)            //To check whether the character of the string is same as the given character or not
        t=*(n+i);                //Assigning the value to new variable
    }
    if(t!='\0')                 //to check whether the value of the variable is null or not
    return 1;
    else
    return 0;
}
int main()
{
    int size;
    cout<<"Enter max size of array"<<endl;
    cin>>size;                  //Asking for the size of array
    char ar[size];             //Declare the array with maximum size
    cout<<"Enter string to array"<<endl;
    cin>>ar;                   //Asking for inputs of the array
    char a;
    cout<<"Enter the character you want to find in the array"<<endl;
    cin>>a;
    char* n=&ar[0];            //Point to the array
    cout<<contains(n
                   ,a);        //Call the function
    return 0;
}
