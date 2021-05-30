#include<bits/stdc++.h>
using namespace std;
int min_moves(long long int a,long long int b)
{
    int p=0,m=1,n=2;
    if(a==b)
    {
        return p;
    }
    else if(a<b)
    {
        if((a%2==0) && (b%2==0))
        {
            return n;
        }
        else if((a%2==0) && (b%2!=0))
        {
            return m;
        }
        else if((a%2!=0) && (b%2==0))
        {
            return m;
        }
        else if((a%2!=0) && (b%2!=0))
        {
            return n;
        }
    }
    else if(a>b)
    {
        if((a%2==0) && (b%2==0))
        {
            return m;
        }
        else if((a%2==0) && (b%2!=0))
        {
            return n;
        }
        else if((a%2!=0) && (b%2!=0))
        {
            return m;
        }
        else if((a%2!=0) && (b%2==0))
        {
            return n;
        }
    }
}
int main()
{
    int t;
    long long int a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int x=min_moves(a,b);
        cout<<x<<endl;
    }
    return 0;
}
