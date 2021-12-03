#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int res = gcd(a,b);
        cout<<res<<endl;
    }
    return 0;
}
