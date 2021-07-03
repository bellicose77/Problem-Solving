#include<bits/stdc++.h>
using namespace std;
bool crossword(int n,int u,int r,int d,int l)
{
    int x=n-2;
    if(u<=x && r<=x && d<=x && l<=x)
    {
        return true;
    }
    else if(u==n-1)
    {
        if(l>r)
        {
            l--;
        }
        else
        {
            r--;
        }
        if(l<0 || r<0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else if(u==n)
    {
        r--;
        l--;
        if(r<0 || l<0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else if(d==n)
    {
        r--;
        l--;
        if(r<0 || l<0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else if(r==n)
    {
        u--;
        d--;
        if(d<0 || u<0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else if(l==n)
    {
        u--;
        d--;
        if(u<0 || d<0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
int main()
{
    int n,u,r,d,l;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>u>>r>>d>>l;
        if(crossword(n,u,r,d,l))
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
