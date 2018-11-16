// This is a library
#include <iostream>
using namespace std;
int main()
{
    char arr[20];        //Declaring an array
    char *n;            //Declaring a pointer
    cout<<"Input about 10 characters of string"<<endl;
    cin>>arr;           //Asking for the entries of array
    n=&arr[0];         //Pointer pointing to the array
                //Loop to print values starting from the last term
    for(int i=9;i>=0;i--)
    {
                    //Loop to print the values till the last term
        for(int j=i;j<10;j++)
        {
            cout<<*(n+j);
        }
        cout<<endl;
    }
    return 0;
}
