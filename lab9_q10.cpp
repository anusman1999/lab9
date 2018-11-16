// This is a library
#include <iostream>
using namespace std;
void revtString(char *n)           //Declaring a function which returns nothing
{
    int end;
    int count=0;                       //Initializing the count
    for(int i=0;(*(n+i))!='\0';i++)    //Loop to count the size of array
    {
        count++;
    }
    end=count-1;
    for(int i=end;i>=0;i--)           //Loop to print values from the last term
    {
        cout<<*(n+i);
    }
}
int main()
{
    int size;
    cout<<"Enter max size"<<endl;
    cin>>size;                     //Asking for the size of the array
    char arr[size];               //Declare array with given size
    cout<<"Enter input to array"<<endl;
    cin>>arr;                      //Asking the user for the inputs to the array

    char* m=&arr[0];               //Declaring the pointer
    revtString(m);                 //Calling the function
    return 0;
}
