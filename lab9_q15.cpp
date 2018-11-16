// This is a library
#include <iostream>
using namespace std;
int main()           //Driver function
{
    char ar[20];    //Declaring an array
    char* q;        //Declaring a pointer
    cout<<"Input about 10 characters of string"<<endl;
    cin>>ar;       //Asking for the entries of array
    q=&ar[0];      //Pointer pointing to the array
                //Loop to count the rows
    for(int i=0;i<=10;i++)
    {
                        //Loop to print the values
        for(int j=i;j<=10;j++)
        {
            cout<<*(q+j);
        }
        cout<<endl;
    }
    return 0;
}
