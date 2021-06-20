#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int d,long long int b)
{
    if(d==0)
    {
        return b;
    }
    if(b==0)
    {
        return d;
    }
    if(d==b)
    {
        return d;
    }
    if(d>b)
    {
        return gcd(d-b,b);
    }
    else
    {
        return gcd(d,b-d);
    }

}
long long int digit_sum(long long int s)
{
    long long int sum=0;
   while(s!=0)
   {
       sum+=s%10;
       s/=10;
   }
   return sum;
}
long long int gcd_sum(long long int n)
{
    for(long long int i=n;i<=n+2;i++)
    {
        long long int v=digit_sum(i);
        long long int g=gcd(i,v);
        if(g>1)
        {
            return i;
            break;
        }
    }
}
int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<2<<endl;
        }
        else
        {
        long long int x=gcd_sum(n);
        cout<<x<<endl;
        }

    }
    return 0;
}
