#include<bits/stdc++.h>
using namespace std;

class Example
{
public:
    int x;
    Example (int a)
    {
        x=a;
    }
//    Example operator +(Example obj)
//    {
//        Example ans(0);
//        ans.x=x+obj.x;
//        return ans;
//    }

    int operator +(Example obj)
    {
        return x+obj.x;
    }
};

int main()
{
    Example a(30),b(20),c(50);
//    Example ans=a+b;
//    Example ans2=ans+c;
//    cout<<ans2.x<<endl;
    int ans=a+b;
    Example ansObj(ans);
    cout<<ansObj+c<<endl;
}
