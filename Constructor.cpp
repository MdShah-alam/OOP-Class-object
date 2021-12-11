#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public:
    int id;
    double gpa;
    student(int x,double y)
    {
        id=x;
        gpa=y;
    }
    void display()
    {
        cout<<id<<"   "<<gpa<<endl;
    }
};
int main()
{
    student shakib(1910279158 ,3.85);
    shakib.display();

    student kawcher(1911079152 ,3.94);
    kawcher.display();
    getch();
}
