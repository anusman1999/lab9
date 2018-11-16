//This is a library
#include <iostream>
using namespace std;

int main()      //Driver function
{
    //Declare variables and pointer
    int a,b;
    int* n=&a;              //Pointer p points to a
    cout<<"Enter the entries a and b"<<endl;
    cin>>a;
    cin>>b;                         //Asking the user for a and b
    b=*n;                          //Assigning value of *p to b
    cout<<"a="<<a<<" b="<<b<<" *p="<<*n<<endl;   //Printing a,b,*p
    a=2,b=3;                       //Assigning value to variables a and b
    cout<<"a="<<a<<" b="<<b<<" *p="<<*n<<endl;     //Printing a,b,*p
    n=&b;                          //Pointing p to b
    cout<<"a="<<a<<" b="<<b<<" *p="<<*n;        //Printing all
    return 0;
}
