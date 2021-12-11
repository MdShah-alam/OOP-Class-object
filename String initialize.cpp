#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
int main()
{
    char ch1[]="Shah";
    char ch2[10];
    char ch3[]="-alam";
    char ch4[]="sakib";
    char ch5[]="Sakib";

    int len=strlen(ch1);
    cout <<"Length of string="<<len<<endl;

    strcpy(ch2,ch1);
    cout<<"ch2="<<ch2<<endl;

    strcat(ch1,ch3);
    cout<<"ch1="<<ch1<<endl;

    strupr(ch1);
    cout<<"ch1="<<ch1<<endl;

    strlwr(ch1);
    cout<<"ch1="<<ch1<<endl;

    int value = strcmp(ch4,ch5);
    if(value==0)
    {
        cout<<"strings are equal";
    }
    else
    {
        cout<<"strings aren't equal";
    }

    getch();
}
