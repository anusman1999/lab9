// This is a library
#include <iostream>
using namespace std;
int myStrLen(char *n)            //Declaring the function for string
{
    int count=0;                 //Initializing the count
    for(int i=0;*(n+i)!='\0';i++) //Loop for counting the length
    {
        count++;
    }
    return count;
}
int main()
{
    int size;
    cout<<"Enter max size of array"<< endl;
    cin>>size;                       //Asking for the size of array
    char arr[size];                  //Declaring the array of max size
    cout<<"Enter the string:"<<endl;
    cin>>arr;                        //Asking the user for the string
    char* n=&arr[0];                   //pointer to array
    cout<<"Length of the string:"<<myStrLen(n);     //calling  the function
    return 0;
}
