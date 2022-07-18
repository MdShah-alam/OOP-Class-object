#include<bits/stdc++.h>
using namespace std;

class Example
{
private:
    int x;
    int pass;
public:
    Example(int p)
    {
        pass=p;
    }
    void setter(int a, int p)
    {
        if(pass==p)
        {
            x=a;
        }
        else
        {
            cout<<"Error password"<<endl;
        }
    }
    int getter(int p)
    {
        if(pass==p)
        {
            return x;
        }
        else
        {
            cout<<"Error password"<<endl;
            return -1;
        }
    }
};

int main()
{
    Example a(1234);
    a.setter(1000,1234);
    cout<<a.getter(1234)<<endl;
    return 0;
}
