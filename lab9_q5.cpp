// This is a library
#include <iostream>
using namespace std;
int main()                            //Driver function of the code
{
   char a[10] ="abcde";               //Declaring the array
   cout<<"Given array is:"<<a<<endl;
   char* cptr;                        //Declaring the pointer
   cptr=a;                            //point to array
   cout<<"Reverse array is:";
   for(int j=10;j>=0;j--)             //Use loop to print characters in reverse order
   {
       cout<<*(cptr+j);
   }
   return 0;
}
