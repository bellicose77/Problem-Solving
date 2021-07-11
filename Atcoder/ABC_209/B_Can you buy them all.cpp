#include<bits/stdc++.h>
using namespace std;
bool buy(int total,int n,int taka)
{
    int x=n/2;
    int res=total-x;
    if(taka>=res)
    {
        return true;

    }
    else
    {
        return false;
    }
}
int  main()
{
    int x,n,a;
    cin>>n>>x;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
    }
    if(buy(sum,n,x))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
