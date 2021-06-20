#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
    {
       return gcd(a-b, b);
    }
    else
    {
       return gcd(a, b-a);
    }

}
bool number(long long int a,long long int b,long long int k)
{
    long long int x,y, c=0;
    while(a!=b)
    {
        long long int g=gcd(a,b);

        if(a>b)
        {
            x=a/g;
           cout<<"a:"<<x<<endl;
            c++;
        }
        else
        {
            y=b/g;
            cout<<"B:"<<y<<endl;
            c++;
        }
        a=x;
        b=y;
    }
    if(c<=k)
    {
        return true ;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t;
    long long  int a,b,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        if(number(a,b,k))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
