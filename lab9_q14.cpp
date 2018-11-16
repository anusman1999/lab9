// This is a library
#include <iostream>
using namespace std;
int main()             //Driver function
{
    char arry[20];       //Declaring an array of size 20
    cout<<"Enter your name:"<<endl;
    cin.getline(arry,20);
    //Print string character by  using normal index method
    cout<<"Using normal index method"<<endl;
    for(int i=0;i<20;i++)     //Writing a loop for all the entries
    {
        cout<<arry[i];
    }
    cout<<endl<<"Using pointer method"<<endl;
    //Print string character by using pointer method
    char* n=&arry[0];
    for(int i=0;i<20;i++)     //Writing a loop for all the entries
    {
        cout<<*(n+i);
    }
    return 0;
}
