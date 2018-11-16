// This is a library
#include <iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};       //Creating an array of size 10
    //Printing values using normal index method
    cout<<"The values using normal index method"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";                  //Printing out the values
    }
    cout<<endl<<"The values using pointer method"<<endl;
    //Printing values using pointer method
    int* n=&arr[0];
    for(int i=0;i<10;i++)
    {
        cout<<*(n+i)<<" ";               //Printing out the values
    }
    return 0;
}
