#include<bits/stdc++.h>
using namespace std;

class Parent
{
private:
    int taka;
protected:
    int password;
public:
    Parent(int tk,int pd)
    {
        taka=tk;
        password=pd;
    }
    friend class AbburBondhu;
};
class AbburBondhu
{
public:
    void TellSecret(Parent *ptr)
    {
        cout<<ptr->taka<<endl;
        cout<<ptr->password<<endl;

    }
};
int main()
{
   Parent pt(1500,1234);
   AbburBondhu bondhu;
   bondhu.TellSecret(&pt);
   return 0;
}
