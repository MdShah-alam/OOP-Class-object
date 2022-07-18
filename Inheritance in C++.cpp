#include<bits/stdc++.h>
using namespace std;

class parent
{
public:
    int x;
private:
    int y;
protected:
    int z;
public:
    parent(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
};

class child:public parent
{
public:
    int xx;
    child(int aa,int a,int b,int c):parent(a,b,c)
    {
        xx=aa;
    }
    void tell_me()
    {
        cout<<"protected value is: "<<z<<endl;
    }
};
int main()
{
    parent pt(10,20,30);
    child ch(100,10,20,30);
    cout<<"child value is: "<<ch.xx<<endl;
    ch.tell_me();
}
