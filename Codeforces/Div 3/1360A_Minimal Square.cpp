#include<bits/stdc++.h>
using namespace std;
int square(int a,int b)
{
    int y,x;
    y=min(a,b);
    x=max(a,b);
    if((y+y)>=x)
    {
        return (y+y)*(y+y);
    }
    else
    {
        return x*x;
    }

}
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
    cin>>a>>b;
      int x=square(a,b);
      cout<<x<<endl;
    }

    return 0;
}
