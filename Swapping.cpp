#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b,temp;
    cout<<"*    Swapping of the two Numbers   * \n ";

    cout<<"Enter two numbers : \n ";
    cin>>a>>b;
    cout<<"Before swapping the Numbers are:" <<endl;
    cout<< "a ="<<a<<endl ;
    cout<< "b ="<<b<<endl;
     temp=a;
     a=b;
     b=temp;

     cout<<"After swapping the Numbers are:" <<endl;
     cout<< "a ="<<a<<endl ;
     cout<< "b ="<<b<<endl ;
     return 0;
}