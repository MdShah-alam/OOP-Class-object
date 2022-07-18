#include<bits/stdc++.h>
using namespace std;

class Example
{
public:
    int add(int x,int y)
    {
        cout<<"First one "<<endl;
        return x+y;
    }
    double add(double x,double y)
    {
        cout<<"Second one "<<endl;
        return x+y;
    }
    char add(char x)
    {
        cout<<"Hi ";
        return x;
    }
};
int main()
{
    Example ex;
    char a='d';

    cout<<ex.add(6 , 3)<<endl;
    return 0;
}
