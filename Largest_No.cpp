#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float x,y,z;
    cout<<"Enter Three Numbers : \n";
    cin>>x>>y>>z;
    if(x>z)
    {
        if(x>y)
        {
              cout<<"Largest Number is :"<<x;
        }
        else
        {
              cout<<"Largest Number is :"<<y;
        }
   
    }
    else
    {
        if(y<z)
        {
             cout<<"Largest Number is :"<<z;
        }
        else
        cout<<"Largest Number is :"<<y;
    }
return 0;
}

