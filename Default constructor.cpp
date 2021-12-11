#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int id;
    double gpa;

    display()
    {
        cout<<id<<"   "<<gpa<<endl;
    }
    student(int x,double y)
    {
        id=x;
        gpa=y;
    }
    student()
    {
        cout<<"constructor default"<<endl<<endl;
    }
};
int main()
{
    student ob;

    student shakib(1910279158,3.85);
    shakib.display();

    student kawcher(1911079152,3.94);
    kawcher.display();

    getch();

}
