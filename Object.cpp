#include <iostream>
#include <conio.h>
using namespace std;
class Result {
public:
    float percentage;
    char grade;
};
int main() {
    Result s;
    s.percentage = 81;
    s.grade ='A';
    cout<< "Percentage in Result is: "<< s.percentage<<endl;
    cout<< "Grade in Result is: "<< s.grade<<endl;

    return 0;
}