#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
   string str1="shah";
   string str2="-alam";
   string str3;

   str3=str1;
   cout<<"str3 = "<<str3<<endl;

   str3=str1+str2;
   cout<<"str1+str2 = "<<str3<<endl;

   int len=str2.size();
   cout<<"Length of str2 = "<<len;

    getch();
}
