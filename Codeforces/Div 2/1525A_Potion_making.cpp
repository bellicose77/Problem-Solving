#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
        return gcd(b,a%b);
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int c=100-n;
        int x=gcd(c,n);
        int sum=(n/x)+(c/x);
        cout<<sum<<endl;
    }
    return 0;
}
