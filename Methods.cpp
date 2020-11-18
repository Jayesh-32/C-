#include <iostream>
#include <conio.h>
using namespace std;
class Student{
    public:
        int roll_no;
        string name;
        void insert(int n,string x)
    {
        roll_no=n;
        name=x;
    }
    void display()
    {
        cout<<roll_no<<"  "<<name<<endl;
    }
};
int main() 
{
    Student s1;
    Student s2;
    s1.insert(32, "Jayesh");
    s2.insert(36, "Vivek");
    s1.display();
    s2.display();
    return 0;
}