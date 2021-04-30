#include<bits/stdc++.h>
using namespace std;
/*
void beans()
{
  other person code
    ll r,b,d;
        cin>>r>>b>>d;
        ll x=min(r,b);
        if(abs(r-b)>x*d)
            cout<<"NO\n";
        else
            cout<<"Yes\n";
}
    */



void beans()
{
    long long int r,b,d,v;
    cin>>r>>b>>d;
    if(abs(r-b)<=d)
    {
        cout<<"YES"<<endl;
        return;
    }
    v=min(r,b);
    r-=v;
    b-=v;
    if(ceil(max(r,b))/v <=d)
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        cout<<"NO"<<endl;
        return;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        beans();
    }
    return 0;
}
