// This is a library
#include <iostream>
using namespace std;

int main()
{
    //Declaring variables and pointers
    int x;
    int *m;
    char y;
    char *n;
    float z;
    float *o;
    double a;
    double *p;
    bool b;
    bool *q;
    //Printing the sizes of the pointers and variables using the sizeof() function
    cout<<"size of int and its pointer are respectively:"<<sizeof(x)<<" and "<<sizeof(m)<<endl;
    cout<<"size of char and its pointer are respectively:"<<sizeof(y)<<" and "<<sizeof(n)<<endl;
    cout<<"size of float and its pointer are respectively:"<<sizeof(z)<<" and "<<sizeof(o)<<endl;
    cout<<"size of double and its pointer are respectively:"<<sizeof(a)<<" and "<<sizeof(p)<<endl;
    cout<<"size of boolean and its pointer are respectively:"<<sizeof(b)<<" and "<<sizeof(q)<<endl;
    return 0;
}
