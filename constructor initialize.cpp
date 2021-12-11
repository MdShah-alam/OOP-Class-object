#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public :
   const int admissionFee;
   const int examFee;
   int id;

    student(int x,int y,int z)
    : admissionFee(x),examFee(y)
    {
        cout<<"Admission Fee="<<admissionFee<<endl;
        cout<<"Exam Fee="<<examFee<<endl;
        id=z;
        cout<<"Id="<<id;

    }
};
int main()
{
    student s1(20000,500,2010279141);

    getch();
}
