#include<bits/stdc++.h>
using namespace std;

class Parent
{
private:
    int taka;
protected:
    int password;
public:
    Parent(int tk,int pass)
    {
        taka=tk;
        password=pass;
    }
    friend void TellSecret(Parent *ptr);
};

void TellSecret(Parent *ptr)
{
    cout<<ptr->taka<<endl;
    cout<<ptr->password<<endl;
}
int main()
{
    Parent pt(1500,1234);
    TellSecret(&pt);
    return 0;
}
