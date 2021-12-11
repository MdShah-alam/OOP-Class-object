#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public:
    int id;
    double gpa;

    void display()
    {
        cout<<id<<"   "<<gpa<<endl;
    }

    void setvalue( int x,double y)
    {
        id=x;
        gpa=y;
    }
};
int main()
{
    student shakib,kawcher;
    shakib.setvalue( 191027958 , 3.85);
    shakib.display();

    kawcher.setvalue( 191107952 , 3.94);
    kawcher.display();

    getch();
}
