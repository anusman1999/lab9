// This is a library
#include <iostream>
using namespace std;
double* maximum(double* x, int size)
{

    int y;                                  //sort array in descending order

    for(int i=0;i<size;i++)
    {
	    for(int j=i+1;j<size;j++)
	    {
		    if(*(x+i)<*(x+j))
		    {
			    y=*(x+i);
			    *(x+i)=*(x+j);
			    *(x+j)=y;
		    }
	    }
    }
    return x;
}
int main()                                 // Driver function function
{

    int size;
    cout<<"Enter size of the array"<<endl;
    cin>>size;                             //Asking the user for the size of array

    double arr[size];               //Declaring an array
    if(size!=0)                           //Checking the size of the integer whether it is zero or not
    {
        cout<<"Enter the elements to array"<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];               //Inputing the elements in array
        }
        double* p=&arr[0];
        cout<<"Max:"<<*maximum(p,size);             //call the function
    }
    else
    {
        cout<<"Size of the array is zero"<<endl;
        cout<<"Max = NULL";
    }
    return 0;
}
