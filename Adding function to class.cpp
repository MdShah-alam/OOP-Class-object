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
};
int main()
{
    student kawcher,shakib;
    kawcher.id=191027958;
    kawcher.gpa=3.85;
    kawcher.display();

    shakib.id=191107952;
    shakib.gpa=3.75;
    shakib.display();

    getch();
}
