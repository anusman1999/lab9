// This is a library
#include <iostream>
using namespace std;
int countEven(int *n,int size)   //Declaring a function
{
    int count=0;
    for(int i=0;i<size;i++)     //Loop for checking each value
    {
        if(*(n+i)%2==0)         //To check whether the value is even or odd
        {
            count++;            // total number of even number
        }
    }
    return count;
}
int main()                      //Driver  function
{

    int size;                   //Declaring the variable
    cout<<"Enter size of the array"<<endl;
    cin>>size;                  //Asking user for the size of the array
    int arr[size];              //Declaring the array of required size
    cout<<"Enter input to array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];            //Asking for the entries of the array
    }
    int* n=&arr[0];             //Pointer to array
    cout<<"No. of even numbers:"<<countEven(n,size);     //calling the function
}
